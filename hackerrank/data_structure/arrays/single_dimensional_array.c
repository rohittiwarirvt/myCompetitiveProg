#include <stdio.h>


int main() {

  int array[10] = {1,2,3,4,5,6,7,8,9 ,10};
  int array_size = sizeof(array)/sizeof(int);
  //printf("Array size %d", array_size);
  for(int i = 0 ;i < array_size; i++) {
    printf("%d ", array[i]);
  }
  return 0;
}
