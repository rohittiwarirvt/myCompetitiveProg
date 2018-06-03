#include<stdio.h>
int top = -1;
int stack_size = 10;

void push(int stack[], int x) {
  if (top == stack_size-1) {
    printf("The stack is full\n");
  } else {
    stack[top +1] = x;
    top++;
  }
}


int pop(int stack[]) {
  int item = -1;
  if (top == -1) {
    printf("The stack is empty\n");
  } else {
    stack[top];
    top--;
  }

  return item;
}

int main() {
  int stack[stack_size];
  for (int i = 0; i < stack_size; i++)
  {
    push(stack, i+2);
  }

  for (int i = 0; i < stack_size; ++i)
  {
    printf("%d ", stack[i]);
  }
  printf("\n");

  pop(stack);
  pop(stack);
  pop(stack);

  push(stack, 16);

  for (int i = 0; i < stack_size; ++i)
  {
    printf("%d ", stack[i]);
  }
  printf("\n");

  return 0;
}

