#include<stdio.h>
int main() {
  int t,i,j,k,flag=0;
  char a[4][4];
  scanf("%d",&t);
  while(t--) {
    flag=0;
    for(i=0;i< 4;i++) {
      scanf("%s", a[i]);
    }
    for(i=0;i<4;i++) {
      for(j=0;j<4;j++) {
        if (j +2 < 4 && flag==0){
          if ( (a[i][j] ==a[i][j+1]=='x' && a[i][j+2] =='.' )||
              (a[i][j] =='.' && a[i][j+1]== a[i][j+2] =='x')||
              (a[i][j] =='x' && a[i][j+1]== '.' && a[i][j+2] =='x')
            ){
            printf("YES\n");
            flag=1;
            break;
          }
        }
        if (i +2 < 4 && flag ==0) {
          if ( (a[i][j] ==a[i+1][j]=='x' && a[i+2][j] =='.' )||
              (a[i][j] =='.' && a[i+1][j]== a[i+2][j] =='x')||
              (a[i][j] =='x' && a[i+1][j]== '.' && a[i+2][j] =='x')
            ){
            printf("YES\n");
            flag=1;
            break;
          }
        }
        if ((i +2 < 4) && (j +2 < 4) && flag ==0) {
          if ( (a[i][j] ==a[i+1][j+1]=='x' && a[i+2][j+2] =='.' )||
              (a[i][j] =='.' && a[i+1][j+2]== a[i+2][j+2] =='x')||
              (a[i][j] =='x' && a[i+1][j+1]== '.' && a[i+2][j+2] =='x')
            ){
            printf("YES\n");
            flag=1;
            break;
          }
        }
        if((((i==0)&&(j>=2))||((i==1)&&(j>=2)))&&(flag==0)) {
          if(((a[i][j]=='x')&&(a[i+1][j-1]=='.')&&(a[i+2][j-2]=='x'))||
             ((a[i][j]=='x')&&(a[i+1][j-1]=='x')&&(a[i+2][j-2]=='.'))||
             ((a[i][j]=='.')&&(a[i+1][j-1]=='x')&&(a[i+2][j-2]=='x'))) {
            printf("YES\n");
            flag=1;
            break;
          }
        }
      }
    }
    if(flag==0) {
      printf("NO\n");
    }
  }
  return 0;
}
/*
3

xx..
.oo.
x...
oox.


o.x.
o...
.x..
ooxx


x..x
..oo
o...
x.xo
*/
