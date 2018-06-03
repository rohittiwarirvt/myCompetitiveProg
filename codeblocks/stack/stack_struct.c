#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

// A structure to represent a stack

struct  Stack
{
  int top;
  unsigned capacity;
  int* array;
};

// Stack is full when top is equal to capacity
int isFullStack(struct Stack *stack) {
  return stack->top == stack->capacity - 1;
}


// Stack is empty when top is negative
int isEmptyStack(struct Stack* stack) {
  return stack->top == -1;
}

// function to create a stack of capacity. It initializes
// size of the stack 0
struct Stack * createStack(unsigned capacity) {
  struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
  stack->capacity = capacity;
  stack->top = -1;
  stack->array = (int *)malloc(capacity * sizeof(int));
  return stack;
}


// function to add an item to top of stack, increaase the top by 1
void push(struct Stack * stack, int item) {
  if(!isFullStack(stack)) {
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item );
  }
  return;
}

// function to remove an item from top. descreases the top by 1
int pop(struct Stack * stack) {

  if (!isEmptyStack(stack)) {
    return stack->array[stack->top--];
  }
  return INT_MIN;
}


// the executing program
int main() {
  struct Stack * stack = createStack(100);
  push(stack, 10);
  push(stack, 12);
  push(stack, 122);
  push(stack,199);

  printf("%d popped from the stack\n", pop(stack));
  return 0;
}
