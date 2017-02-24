/*
 * referring https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal_in_c.htm
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;



typedef struct node {
  int data;
  node *left_child;
  node *right_child;
};

node *root = NULL;

void insert(int);
node * search(int);
void preOrderTraversal(node *);
void inOrderTraversal(node *);
void postOrderTraversal(node *);

int main()
{
  int i, array[7] = {27, 24, 35, 10, 19, 31, 42};

  for(i = 0; i < 7; i++) {
    insert(array[i]);
  }
  // searching

  i = 35;
  node * temp = search(i);
  if (temp != NULL) {
      printf("\n[%d] element found.", temp->data);
      printf("\n");
  } else {
    printf("[ x ] not found", i);
  }

  i = 15;
  temp = search(i);
  if (temp != NULL) {
      printf("\n[%d] element found.", temp->data);
      printf("\n");
  } else {
    printf("[ x ] not found", i);
  }


  printf("\n Preorder Traversal ...\n");
  preOrderTraversal(root);

  printf("\n In order Traversal ...\n ");
  inOrderTraversal(root);

  printf("\n postOrderTraversal ...\n ");
  postOrderTraversal(root);
    return 0;
}



void insert(int data)
{
  node *temp_node = (node *) malloc(sizeof(node));
  node *current, *parent;

  temp_node->data = data;
  temp_node->left_child = NULL;
  temp_node->right_child = NULL;

  if (root == NULL) {
    root = temp_node;
  } else {
    current = root;
    parent = NULL;
    while(1) {
      parent = current;


      if ( parent->data > data) {
          current = current->left_child;

          if ( current == NULL) {
            parent->left_child = temp_node;
            return ;
          }
      } else {
         current = current->right_child;
         if ( current == NULL) {
          parent->right_child = temp_node;
          return ;
         }
      }

    }
  }

}

node * search(int data)
{
  node * current = root;

  while (current ->data != data) {
    if ( current != NULL) {
      printf("%d ", current->data);
    }

    if ( current->data > data) {
        current = current->left_child;
    } else {
      current = current->right_child;
    }

    if ( current == NULL) {
      return NULL;
    }
  }

  return current;
}

void preOrderTraversal(node * root)
{
  if (root != NULL) {
    printf("%d ", root->data);
    preOrderTraversal(root->left_child);
    preOrderTraversal(root->right_child);
  }
}


void inOrderTraversal(node *)
{
  if (root != NULL) {
    inOrderTraversal(root->left_child);
    printf("%d ", root->data);
    inOrderTraversal(root->right_child);
  }
}

void postOrderTraversal(node *)
{
  if (root != NULL) {
    postOrderTraversal(root->left_child);
    postOrderTraversal(root->right_child);
    printf("%d ", root->data);
  }
}
