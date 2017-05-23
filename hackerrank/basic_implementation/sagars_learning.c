#include<stdio.h>
int main() {
  int t;
  long long number,j;
  scanf("%d", &t);
  while (t--) {
    scanf("%lld", &number);
    if (number <=2) {
      printf("-1\n");
    } else {
      j= number/3;
      printf("%lld %lld %lld \n",j, 2*j,3*j );
    }
  }
  return 0;
}
