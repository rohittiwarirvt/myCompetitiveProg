#include <stdio.h>

int main() {

  int l,r, k,i,j,count;
  scanf("%d", &l);
  scanf("%d", &r);
  scanf("%d", &k);
  for(count=0,i=l;i <=r; i++) {
     i%k ==0 ? count++ : NULL;
  }
  printf("%d", count);
  return 0;
}
