#include<stdio.h>
int main() {
  int i, time, test_cases, array_length, greatest_element_value, minimum, input_value;
  scanf("%d", &test_cases);
  while(test_cases--) {
    scanf("%d %d", &array_length, &greatest_element_value);
    minimum = greatest_element_value;
    for(i=0;i< array_length;i++){
      scanf("%d", &input_value);
      if (minimum > input_value) {
        minimum = input_value;
      }
      //printf("%d\n", minimum);
    }
    printf("%d\n", greatest_element_value- minimum);
  }

}
