#include<stdio.h>
int main() {
  int n,i,j,s1, s2,s3;
  unsigned long input[1000];
  scanf("%d",&n);
  for(i=0;i<n;i++) {
    scanf("%ld", &input[i]);
  }
  s1=s2=s3=0;
  for (i=0;i<n;i++) {
    s1+=input[i*3+1 -1];
    s2+=input[3*i-1-1];
    s3+=input[3*i+3-1];
  }
  printf("%d %d %d\n",s1,s2,s3);
  return 0;
}
//5
// 1 2 3 4 5
