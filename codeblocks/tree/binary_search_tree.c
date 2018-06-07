#include <stdio.h>
#include <stdlib.h>

struct tree {
  int data;
  struct tree* left;
  struct tree* right;
};

struct tree * createNode(int data) {
  struct tree * node = (struct tree*) malloc(sizeof(tree));
  node->data = data;
  node->left = node->right = NULL;
}

// a utility function to insert a new node with given key in BST
 struct tree* insert(struct tree* node, int key) {
  // if tree is empty return a new node
  if (node == NULL) {
    return createNode(key);
  }

  // other wise recur down the tree
  if ( key < node->data) {
     node->left = insert(node->left, key);
  } else if (key > node->data) {
    node->right = insert(node->right, key);
  }

  // return the unchanged now  pointer
  return node;
}


// a utility to search a given key in bst

struct tree* search(struct tree* root, int key) {
  if (root == NULL || root->data == key)  {
    return root;
  }

  if ( key < root->data) {
    return search(root->left, key);
  } else {
    return search(root->right, key);
  }

}

void inorder(struct tree* root) {
  if (root != NULL) {
    inorder(root->left);
    printf("=>%d ", root->data);
    inorder(root->right);
  }
}
int main() {
  struct tree *root = NULL;

  root = insert(root, 50);
  insert(root, 30);
  insert(root, 20);
  insert(root, 40);
  insert(root, 70);
  insert(root, 60);
  insert(root, 80);
  // print inorder traversal
  inorder(root);

  return 0;
}
