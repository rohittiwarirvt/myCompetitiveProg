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
void insertNodePos();
void sortedAscend();
void deleteListPos();
void searchList();
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
          printf("\n...Inserting node at first...");
          insertNodeFirst();
        break;
      case 2:
          printf("\n...Inserting node at last...");
          insertNodeLast();
        break;
      case 3:
          printf("\n...Inserting node at position...");
          insertNodePos();
        break;
      case 4:
          printf("\n...Sorted Linked List in Ascending Order..");
          sortedAscend();
        break;
      case 5:
          printf("\n...Deleting Node from any Position...");
          deleteListPos();
        break;
      case 6:
          printf("\n...Updating Node Value...");
          updateListVal();
          break;
      case 7:
        printf("\n...Searching Element in the List...");
        searchList();
        break;
      case 8:
        printf("\n...Displaying List From Beginning to End...");
        printList();
        break;
      case 9:
        printf("\n...Displaying List From End using Recursion...");
        revDisplay(first);
        break;
      case 10:
        printf("\n...Exiting...\n");
        return 0;
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
void insertNodeFirst()
{
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

void insertNodeLast()
{
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


void insertNodePos()
{
  int i, pos, val, count = 0;
  printf("\nEnter value of node");
  scanf("%d", &val);
  newnode = createNode(val);
  printf("\nEnter position to insert the node");
  scanf("%d", &pos);
  ptr = first;
  while (ptr != NULL) {
    ptr = ptr->next;
    count++;
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
  else if (pos > 1 && pos <= count) {
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

void sortedAscend()
{
  Node * next;
  int t;

  if (first == NULL) {
    ISEMPTY;
    printf(": No element to sort\n");
  } else {
    for( ptr = first; ptr != NULL; ptr = ptr->next) {
      for(next = ptr->next; next != NULL; next = next->next) {
        if (ptr->value  > next->value) {
          t = ptr->value;
          ptr->value = next->value;
          next->value = t;
        }
      }
    }

    printf("\n --- Sorted List ---");

    for (ptr = first; ptr != NULL; ptr = ptr->next) {
      printf("%d\t", ptr->value);
    }
  }
}

void deleteListPos()
{
  int pos, cnt = 0;

  if (first == NULL) {
    ISEMPTY;
    printf("\n There is not pointers yet");
  } else {
    printf("\n Enter the position to be deleted");
    scanf("%d", &pos);
    ptr = first;
    if (pos == 1) {
      first = first->next;
    } else {
      while (ptr != NULL) {
        cnt++;
        ptr = ptr->next;
      }
      if(pos > 1 &&  pos <= cnt) {

        ptr = first;
        for ( int i=0; i < pos; i++ ) {
          prev = ptr;
          ptr = ptr->next;
        }
        prev->next = ptr->next;
      } else {
        printf("Position is out of range");
      }
      free(ptr);
      printf("\n Element is deleted");
    }
  }
}


void updateListVal()
{
  int flag = 0, oldvalue, newvalue;
  if ( first == NULL) {
      ISEMPTY;
  } else {
    printf("\n Enter the old value u want to update");
    scanf("%d", &oldvalue);
    printf("\n Enter the new value u want to assign");
    scanf("%d", &newvalue);
    for ( ptr = first; ptr != NULL ; ptr = ptr ->next) {
      if (ptr->value == oldvalue) {
        flag = 1;
        ptr->value = newvalue;
        break;
      }
    }

    if ( flag == 1) {
      printf("Updated value successfully");
    } else {
      printf("Sorry ! Unable to find the value which we were supposed to update");
    }
  }
}


void searchList()
{
  int flag, key, pos = 0;

  if (first == NULL) {
    ISEMPTY;
    printf("\n Somethings unexpected happened");
  } else {
    printf("\n Enter the value you want to search");
    for(ptr = first; ptr != NULL ; ptr = ptr->next) {
      pos = pos + 1;
      if (ptr->value == key) {
        flag = 1;
        break;

      }
    }
    if (flag == 1 ) {
      printf("\n Found the dude %d you were looking for @ %d position", key, pos);
    } else {
      printf("\n Hey i think theres is no such key available in the complex");
    }

  }
}


void printList() {

  if (first == NULL) {
    ISEMPTY;
  } else {
    for(ptr = first; ptr != NULL; ptr= ptr->next) {
      printf("%d", ptr->value);
    }
  }
}

void revDisplay(Node * ptr) {
  int value;

  if (ptr  == NULL) {
      ISEMPTY;
      printf("\n No nodes to display");
  } else {
      if (ptr != NULL) {
        value = ptr->value;
        revDisplay(ptr->next);
        printf("%d", value);
      }

  }
}
