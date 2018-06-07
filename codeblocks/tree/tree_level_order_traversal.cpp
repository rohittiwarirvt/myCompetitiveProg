#include <stdio.h>
#include <stdlib.h>
#include <queue>

struct tree {
  int data;
  struct tree* left;
  struct tree* right;
};

struct tree * createNode(int data);

void printLevelOrder(struct tree * );
int height(struct tree*);
void printGivenLevel(struct tree *, int);
struct tree* createNode(int);

int main () {

  struct tree * root = createNode(1);

  root->left = createNode(4);
  root->right = createNode(5);

  root->right->left = createNode(6);
  root->right->right = createNode(7);

  root->left->left = createNode(2);
  root->left->right = createNode(3);

  printf("Level Order traversal by binary tree is \n");

  printLevelOrder(root);

  return 0;
}



// create a new node and assigns to the
struct tree* createNode(int data) {
  struct tree* node = (struct tree *)malloc(sizeof(struct tree));
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return node;
}


int height(struct tree *root) {
  if( !root ) {
    return 0;
  } else {
    int lheight = height(root->left);
    int rheight = height(root->right);

    if ( lheight > rheight) {
      return (lheight + 1);
    } else {
      return (rheight + 1);
    }
  }
}

void printLevelOrder(struct tree* root) {
  int h = height(root);

  for (int i=1; i <= h; i++) {
    printGivenLevel(root, i);
  }
}

void printGivenLevel(struct tree* node, int level) {
  if (!node){
    return;
  }

  if (level == 1) {
    printf("=>%d", node->data );
  } else if (level > 1 ) {
    printGivenLevel(node->left, level - 1);
    printGivenLevel(node->right, level -1);
  }

}
