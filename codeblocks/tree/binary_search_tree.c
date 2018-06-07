#include <stdio.h>
#include <stdlib.h>

struct tree {
  int data;
  struct tree* left;
  struct tree* right;
}

struct tree * createNode(int data) {
  struct tree * node = (struct tree*) malloc(sizeof(tree));
  node->data = data;
  node->left = node->right = NULL;
}

int main() {
  struct tree *root = createNode(1);
  return 0;
}
