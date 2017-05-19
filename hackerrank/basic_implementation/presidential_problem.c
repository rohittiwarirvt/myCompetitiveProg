#include<stdio.h>
int main() {
  int t, N, Q,i,L,R,j;
  char input[1000];
  scanf("%d",&t);
  while(t--) {
    scanf("%d", &N);
    scanf("%d", &Q);
    scanf("%s", input);

    for(i=1;i<=Q;i++){
      scanf("%d", &L);
      scanf("%d",&R);
      for (j=L-1;j<R;j++){
        input[j%N] =  (input[j] -'a' +26)%26 +'a' -1;
      }
      printf("%s\n", input);

    }

    printf("%s\n", input);
  }
  return 0;
}
