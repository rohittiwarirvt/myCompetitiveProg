#include<stdio.h>
int main() {
  int N,i,num, min, max;
  int input[1000] = {0};
  scanf("%d", &N);
  scanf("%d", &num);
  min=max=num;
  input[min] =1;
  for(i=1;i<N;i++) {
    scanf("%d", &num);
    if(min >= num) {
      min = num;
    } else if(max < num) {
      max=num;
    }
    input[num]=1;
  }
  while(input[++min]);
  if(min>max){
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}
