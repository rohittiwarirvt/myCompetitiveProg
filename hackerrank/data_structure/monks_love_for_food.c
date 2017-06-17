#include<stdio.h>
#include<malloc.h>
typedef struct {
  int data[100001];
  int top;
  int size ;
}stack;

void push(stack *s, int value) {
  s->top = s->top+1;
  s->data[s->top] = value;
  s->size = s->size +1;
}

int pop(stack *s) {
  int temp;
  if (s->top == -1) {
    printf("No Food\n");
    return -1;
  }
  temp = s->data[s->top];
  s->top = s->top -1;
  s->size = s->size -1;
  return temp;
}

void print_stack(stack *s) {
  int i;
  for(i=0;i< s->size;i++) {
    printf("top %d %d\n", s->top, s->data[i]);
  }
}
int main() {
  stack *pile = (stack*)malloc(sizeof(stack));
  int queries, price_of_food, criteria, food;
  scanf("%d", &queries);
  pile->top =-1;
  pile->size =0;
  while(queries--) {
    scanf("%d", &criteria);
    if (criteria ==1) {
      food = pop(pile);
      if (food!=-1){
        printf("%d\n", food );
      }
    } else {
      scanf("%d", &price_of_food);
      //printf("Price of food %d\n", price_of_food);
      push(pile, price_of_food);
      //print_stack(pile);
    }
  }
  return 0;
}

