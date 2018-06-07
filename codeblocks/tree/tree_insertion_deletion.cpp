#include <stdio.h>
#include <stdlib.h>
#include <queue>

struct tree {
  int data;
  struct tree* left;
  struct tree* right;
};

struct tree* createNode(int data) {
  struct tree* node = (struct tree *)malloc(sizeof(struct tree));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}

void inorder(struct tree* node) {
  if (node != NULL) {
    inorder(node->left);
    printf("=>%d ", node->data);
    inorder(node->right);
  }
}


void insert(struct tree* root, int key) {
  std::queue<struct tree*> q;
  q.push(root);

  while(!q.empty()) {
    struct tree* root = q.front();
    q.pop();

    if (!root->left) {
      root->left = createNode(key);
      break;
    } else {
      q.push(root->left);
    }

    if(!root->right) {
      root->right = createNode(key);
      break;
    } else {
      q.push(root->right);
    }
  }
}

int main () {

  struct tree * root = createNode(1);

  root->left = createNode(2);
  root->right = createNode(3);

  root->left->left = createNode(4);
  root->left->right = createNode(5);

  root->right->left = createNode(6);
  root->right->right = createNode(7);

  printf("Inorder traversal before insertion\n");
  inorder(root);

  int key = 8;
  insert(root, key);

  printf("\n");
  printf("Inorder traversal after insertion\n");
  inorder(root);

  return 0;
}


