#include<stdio.h>
int main(){
  int input_digit, digit_count=0;

  while((input_digit = getchar()) != EOF) {
    if(input_digit >=48 & input_digit <=57) {
      digit_count++;
    }
  }
  printf("%d\n", digit_count);
  return 0;
}
