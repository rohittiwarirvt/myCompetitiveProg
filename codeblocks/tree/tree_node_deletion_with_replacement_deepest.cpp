#include <stdio.h>
#include <stdlib.h>
#include <queue>
using namespace std;

struct tree {
  int data;
  struct tree * left;
  struct tree * right;
};

struct tree* createNode(int data) {
  struct tree* node = (struct tree*)malloc(sizeof(struct tree));
  node->left= node->right = NULL;
  node->data = data;
}

void inorder(struct tree * root) {
  if (root != NULL) {
    inorder(root->left);
    printf("=>%d ", root->data );
    inorder(root->right);
  }
}

void deleteDeepest(struct tree* root, struct tree* d_node) {
  queue<struct tree *> q;
  q.push(root);

  struct tree* temp;
  while(!q.empty()) {
    temp  = q.front();
    q.pop();

    if (temp->left) {
      if(temp->left == d_node) {
        temp->left = NULL;
        delete(d_node);
        return;
      } else {
        q.push(temp->left);
      }
    }

    if (temp->right) {
      if(temp->right == d_node) {
        temp->right = NULL;
        delete(d_node);
        return;
      } else {
        q.push(temp->right);
      }
    }
  }

}

void deletion(struct tree* root, int key) {
  queue<struct tree*> q;
  q.push(root);

  struct tree* temp = NULL;
  struct tree* key_node = NULL;
  while(!q.empty()) {
    temp = q.front();
    q.pop();

    if ( temp->data == key) {
        key_node = temp;
    }

    if (temp->left){
      q.push(temp->left);
    }


    if (temp->right){
      q.push(temp->right);
    }
  }

  int x = temp->data;
  deleteDeepest(root, temp);
  key_node->data = x;
}

int main() {
  struct tree * node = createNode(1);

  node->left = createNode(2);
  node->right = createNode(3);
  node->left->left = createNode(4);
  node->left->right = createNode(5);
  node->right->left = createNode(6);
  node->right->right = createNode(7);

  printf("Inorder Traversal before in deletion\n");

  inorder(node);


  int key = 5;
  deletion(node, key);
  printf("\n");


  printf("Inorder Traversal after deletion\n");
  inorder(node);

  return 0;
}
