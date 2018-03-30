
#include <stdio.h>
#include <string.h>
#define MAX 33

int main() {
  int rows,cols, i, j;
  char input[MAX][MAX];
  int T, N, MID, not_symmetric;

  scanf("%d",&T);
  while (T--) {
    scanf("%d", &N);
    printf("%d %d", T, N);
    for(i = 0;i < N;i++ ) {
        scanf("%s", input[i]);
        printf("\n");
        printf("%d\n", i);
    }
    return 0;
    not_symmetric =0;
    for(i=0;i< N;i++) {
      MID = N/2;
      j = 0;
      while(j <= MID) {
       if(input[i][j] != input[i][N-j-1]) {
        break;
       }
      }
      if (j <= MID) {
         not_symmetric  =1;
         break;
      }
    }
    if ( not_symmetric) {
      printf("NO\n");
    } else {
      printf("YES\n");
    }
  }


  return 0;
}
