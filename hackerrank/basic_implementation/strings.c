#include<stdio.h>
#include<math.h>
int main() {
  int t;
  double N, M;
  scanf("%d", &t);
  while(t--) {
    scanf("%lf %lf", &N, &M);
    if ( pow(N,M) == pow(M, N)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
