#include<stdio.h>
  int data = 1;
#include<stdlib.h>
struct tree {
  int data;
  struct tree* left;
  struct tree* right;
};

struct tree * createNode(int data) {

  struct tree* node = (struct tree*)malloc(sizeof(struct tree));
  node->data = data;
  node->left = node->right = NULL;
  return node;
}

int main() {


  struct tree* mytree = createNode(1);

  mytree->left = createNode(2);
  mytree->right = createNode(3);

  return 0;
}
