#include<stdio.h>
#include<stdlib.h>
int main() {
  long long int n,a,b,c,d,t,move;
  scanf("%lld", &t);
  while(t--) {
    scanf("%lld %lld %lld %lld %lld %lld", &n, &a, &b, &c, &d, &move);

    if (move ==0) {

      if ( c >= a && abs(d-b) <= abs(n-a)) {
        printf("Draw\n");
      } else{
        printf("White Wins\n");
      }

    } else{
      if (c >= a-1 && abs(d-b) <= abs(n-a+1)) {
        printf("Draw\n");
      } else {
        printf("White Wins\n");
      }
    }
  }
  return 0;
}
