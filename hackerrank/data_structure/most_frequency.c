#include<stdio.h>
#define MAX
int main() {
  int no_of_inputs, i, j;
  int arr_of_inputs[10001];
  scanf("%d", &no_of_inputs);
  for(i=0;i<no_of_inputs;i++) {
    arr_of_inputs[i] =0;
  }
  for(i=0;i<no_of_inputs;i++) {
    scanf("%d", &arr_of_inputs[i]);
  }
  return 0;
}
