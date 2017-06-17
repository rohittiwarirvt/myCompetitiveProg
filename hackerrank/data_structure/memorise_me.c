#include<stdio.h>
int main() {
  int no_of_inputs, no_input_queries, i, j;
  int arr_of_inputs[100001], index;
  scanf("%d", &no_of_inputs);
  for(i=0;i<no_of_inputs;i++) {
    arr_of_inputs[i] =0;
  }
  for(i=0;i<no_of_inputs;i++) {
    scanf("%d", &index);
    arr_of_inputs[index]++;
  }
  scanf("%d", &no_input_queries);
  while(no_input_queries--) {
    scanf("%d", &index);
    if (arr_of_inputs[index] == 0) {
      printf("NOT PRESENT\n");
    } else {
      printf("%d\n", arr_of_inputs[index]);
    }
  }
  return 0;
}
