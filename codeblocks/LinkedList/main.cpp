/*
 * referring http://www.sanfoundry.com/c-program-implement-singly-linked-list/
 *
 */

#include <iostream>
#include <stdio.h>
#include <malloc.h>

#define ISEMPTY printf("\n Empty List");

using namespace std;


typedef struct Node {
  int value;
  Node *next;
};

Node* createNode(int);
void insertNodeFirst();
void insertNodeLast();
void insertNodePost();
void sortedAscend();
void deletListPos();
void search();
void updateListVal();
void printList();
void revDisplay(Node *);

Node * newnode, *ptr, *prev, *temp;
Node *first = NULL, *last = NULL;



int main()
{
  int ch;
  char ans = 'Y';

  while (ans == 'Y' ||  ans == 'y') {
    printf("\n---------------------------------\n");
    printf("\nOperations on singly linked list\n");
    printf("\n---------------------------------\n");
    printf("\n1.Insert node at first");
    printf("\n2.Insert node at last");
    printf("\n3.Insert node at position");
    printf("\n4.Sorted Linked List in Ascending Order");
    printf("\n5.Delete Node from any Position");
    printf("\n6.Update Node Value");
    printf("\n7.Search Element in the linked list");
    printf("\n8.Display List from Beginning to end");
    printf("\n9.Display List from end using Recursion");
    printf("\n10.Exit\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\nEnter your choice");
    scanf("%d", &ch);

    switch(ch) {
      case 1:
          printf("\n Insert node at first location");
          insertNodeFirst();
        break;
      case 2:
          printf("\n Inserted node at last location");
          insertNodeLast();
        break;
      case 3:
          printf("\n Inserted node at position ");
          insertNodePost();
        break;
      case 4:
          printf("\n");
          sortedAscend();
        break;
      case 5:
          printf("\n");
          deletListPos();
        break;
      case 6:
        printf("\n");
        updateListVal();

        break;
      case 7:
        printf("\n");
        search();
        break;
      case 8:

        break;
      case 9:

        break;
      case 10:

        break;
      default:
        printf("how r u today can u please choose a legal choice");
    }
    printf("\n You want to continue (Y/N)");
    scanf(" %c", &ans);
  }
    return 0;
}


Node * createNode(int val) {
  newnode = (Node *)malloc(sizeof(Node));

  if (newnode == NULL) {
    printf("\nMemory was not allocated");
  } else {
    newnode->value = val;
    newnode->next = NULL;
    return newnode;
  }

}
// insert node at first location
void insertNodeFirst() {
  int val;

  printf("\nEnter the value of the node");
  scanf("%d", &val);
  newnode = createNode(val);
  if (first == last && first == NULL) {
    first = last = newnode;
    first->next = NULL;
    last->next = NULL;
  } else {
    temp = first;
    first = newnode;
    first->next = temp;
  }

  printf("\n --- INSERTED----");
}

void insertNodeLast() {
  int val;

  printf("\n Enter the value of the node");
  scanf("%d", &val);
  newnode = createNode(val);

  if (first == last && last == NULL) {
    first = last = newnode;
    first->next = NULL;
    last->next = NULL;
  } else {
    last->next = newnode;
    last = newnode;
    last->next = NULL;
  }
}


void insertNodePost() {
  int pos, val, count = 0;
  printf("\nEnter value of node");
  scanf("%d", &val);
  newnode = createNode(val);
  printf("\nEnter position to insert the node");
  scanf("%d", &pos);
  ptr = first;
  while (ptr !== NULL) {
    ptr = ptr->next;
    cout++;
  }
  if (pos == 1) {
    if (first == last && first == NULL) {
      first = last = newnode;
      first->next = NULL;
      last->next = NULL;
    } else {
      temp = first;
      first = newnode;
      first->next = temp;
    }
  }
  else if (pos > 1 && pos <= cnt) {
    ptr = first;
    for(i =1 ; i < pos ; i++) {
      prev = ptr;
      ptr = ptr->next;
    }
    prev->next = newnode;
    newnode->next = ptr;
    printf("\n --- Inserted-----");

  } else {
    printf("\n Position is out of bound pointer at wrong position");
  }
}
