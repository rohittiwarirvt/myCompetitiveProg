#include "stack.h"

void StackInit(stackT *stackP, int maxSize) {
  stackElementT *newContents;

  /* Allocate a new array to hold the contents. */

  newContents = (stackElementT *)malloc(sizeof(stackElementT)*maxSize);

  if ( newContents == NULL) {
    fprintf(stderr, "Insufficient memory to initialize stack.\n");
    exit(1);
  }
  stackP->contents = newContents;
  stackP->maxSize = maxSize;
  stackP->top = -1; /*i.e. Empty */
}

void StackDestroy(stackT *stackP) {
  free(stackP->contents);
  stackP->contents = NULL;
  stackP->maxSize = 0;
  stackP->top = -1;
}


void StackPush(stackT *stackP, stackElementT element) {
  if(StackIsFull(stackP)) {
    fprintf(stderr, "Can't push elements on stack. Stack is full");
    exit(1);
  }

  stackP->contents[++stackP->top] = element;
}


void StackPop(stackT *stackP) {
  if (StackIsEmpty(stackP)) {
    fprint(stderr, "Can't pop element form stack: stack is empty\n");
    exit(1);
  }
  return stackP->contents[stackP->top--];
}


int StackIsEmpty(stackT *stackP) {
  return stackP->top < 0;
}

int StackIsFull(stackT *stackP) {
  return stackP->top = stackP->maxSize-1;
}
