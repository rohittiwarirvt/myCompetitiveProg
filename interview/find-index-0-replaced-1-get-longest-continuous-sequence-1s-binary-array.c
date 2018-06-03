#include<stdio.h>


int maxOnesIndex(int arr[], int n) {

  int max_index= -1;
  int max_count =0;
  int curr_index = 0;
  int prev_index = -1;
  int prev_prev_index = -1;

  for(int i=0;i <  n; i++) {
    if (arr[i] == 0) {
      curr_index= i;
      if (curr_index - prev_prev_index > max_count) {
        max_count = curr_index- prev_prev_index;
        max_index = prev_index;
      }

      prev_prev_index = prev_index;
      prev_index = curr_index;
    }
  }

  if ( n - prev_prev_index > max_count) {
    max_index = prev_index;

  }

  return max_index;
}

int main() {
  int  arr[] =  {1, 1, 0, 0, 1, 0, 1, 1, 1, 0, 1, 1, 1};
  int n = 13;

  int result;

  result = maxOnesIndex(arr, n);
  printf("%d\n", result);
  return 0;
}

