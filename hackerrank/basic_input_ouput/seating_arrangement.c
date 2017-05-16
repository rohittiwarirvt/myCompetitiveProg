#include<stdio.h>
int main() {
  int tc, i,cn, cond;
  scanf("%d", &tc);
  for(i=0;i<tc;i++) {
    scanf("%d",&cn);
    cond = cn%12;
    switch(cond) {
      case 1:
         cn+=11;
         printf("%d WS\n", cn);
      break;
      case 2:
         cn+=9;
         printf("%d MS\n", cn);
      break;
      case 3:
         cn+=7;
         printf("%d AS\n", cn);
      break;
      case 4:
         cn+=5;
         printf("%d AS\n", cn);
      break;
      case 5:
         cn+=3;
         printf("%d MS\n", cn);
      break;
      case 6:
         cn+=1;
         printf("%d WS\n", cn);
      break;
      case 0:
         cn-=11;
         printf("%d WS\n", cn);
      break;
      case 11:
         cn-=9;
         printf("%d MS\n", cn);
      break;
      case 10:
         cn-=7;
         printf("%d AS\n", cn);
      break;
      case 9:
         cn-=5;
         printf("%d AS\n", cn);
      break;
      case 8:
         cn-=3;
         printf("%d MS\n", cn);
      break;
      case 7:
         cn-=1;
         printf("%d WS\n", cn);
      break;

    }
  }
  return 0;
}
