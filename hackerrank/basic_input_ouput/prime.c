#include <stdio.h>

int main() {
  int N, i,j;
  scanf("%d", &N);

  for (i=2; i < N; i++) {
    for (j=2; j<= i; j++) {
      if(i % j == 0){
        if ( i != j) {
         break;
        } else {
          printf("%d ", i);
        }
      }

    }
  }
  return 0;
}
