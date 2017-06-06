#include<stdio.h>
int main() {
  int no_in_array,i,j, A[100000], B[10000],Res[10000];
  scanf("%d", &no_in_array);
  for(i=0;i<no_in_array;i++)
    scanf("%d", &A[i]);
  for(i=0;i< no_in_array;i++)
    scanf("%d", &B[i]);

  for(i=0;i<no_in_array;i++) {
    Res[A[i]] = B[i] > Res[A[i]] ? B[i]: Res[A[i]];
  }
  for(i=0;i<no_in_array;i++) {
    printf("%d ", Res[A[i]]);
  }
  return 0;
}
