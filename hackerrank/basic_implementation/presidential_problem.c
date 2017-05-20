#include<stdio.h>
int main() {
  int t, N, Q,i,L,R,j,k, val;
  char input[1000];
  scanf("%d",&t);
  while(t--) {
    scanf("%d", &N);
    scanf("%d", &Q);
    scanf("%s", input);

    for(i=1;i<=Q;i++){
      scanf("%d", &L);
      scanf("%d",&R);
      for (j=L-1,k=0;k<R;k++,j++){
        val = (input[j%(N+1)] -'a' +26)%26 +'a';
        input[j%(N+1)] = val == 97 ? 'z' : val -1;
      }

    }
    printf("%s\n", input);
  }
  return 0;
}
