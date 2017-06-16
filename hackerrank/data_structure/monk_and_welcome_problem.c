#include<stdio.h>
#define MAX 100000
int main() {
  int array_size,i;
  int array_A[MAX], array_B[MAX];
  scanf("%d", &array_size);
  for(i=0;i<array_size;i++) {
    scanf("%d", &array_A[i]);
  }
  for(i=0;i<array_size;i++) {
    scanf("%d", &array_B[i]);
  }
  for(i=0;i<array_size;i++) {
    printf("%d ", array_A[i] + array_B[i]);
  }

  return 0;
}
