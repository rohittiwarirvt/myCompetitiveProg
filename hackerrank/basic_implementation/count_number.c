#include<stdio.h>

int main() {

  int T,N,i, count_number=0,is_digit=0,j;
  char input[10001];
  int output;
  scanf("%d",&T);

  //output
  for(j=0;j<T;j++){
    output =0;
    scanf("%d", &N);
    scanf("%s", input);
    for(i=0;i<=N;i++) {
      if((input[i] >= '0' && input[i] <= '9')|| input[i]==' ') {
        is_digit =1;
        continue;
      } else {
        is_digit ? output++ : 0;
        is_digit=0;
      }
    }
    printf("%d\n", output);
  }

  return 0;
}
