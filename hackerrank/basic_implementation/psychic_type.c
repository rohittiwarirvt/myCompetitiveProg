#include<stdio.h>
int main() {
  int array_number,i,j, starting_position, final_position, step, found_sir_position,next_step;
  int array_of_steps[1000];
  scanf("%d", &array_number);
  for(i=0;i< array_number;i++) {
    scanf("%d", &array_of_steps[i]);
  }
  scanf("%d %d", &starting_position, &final_position);
  next_step= starting_position;
  found_sir_position =0;
  while(array_of_steps[next_step-1] != 0) {
    next_step = array_of_steps[next_step-1];
    if (next_step == final_position) {
      found_sir_position = 1;
      break;
    }
  }
    found_sir_position? printf("Yes\n"): printf("No\n");
  return 0;
}
