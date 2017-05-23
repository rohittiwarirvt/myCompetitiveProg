// first solution by the author
#include<stdio.h>
#include<string.h>
#include<math.h>

#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
int leap(int y) {
  if (y%400==0){
    return 1;
  } else if(y %100==0){
    return 0;
  } else if(y%4 ==0) {
    return 1;
  } else {
    return 0;
  }
}

int count_number(int d, int m, int y){
  int x,ret;
  if (y==0) return 0;
    x=y/100;
  ret =MAX(x,0)*11;
  ret += MAX(0, MIN(13, ((y%100)-1)-2));
  if (m >y%100-1 && y%100>=3) {
    ret++;
  }
  else if(m==y%100-1 && d>y%100-2 && y%100> 2) {
    ret++;
  }
  return ret;
}
int main() {
  int t,i;
  int d1,m1,y1,d2,m2,y2;
  int months[13] = {0,31,28,31,30,31,30,31,30,31,30,31};
  scanf("%d", &t);
  getchar();
  while(t--) {
    scanf("%d:%d:%d %d:%d:%d", &d1,&m1,&y1,&d2,&m2,&y2);
    if (d1 ==1) {
      if (m1==1) {
         d1=31;
         m1=12;
         y1--;
      } else {
        m1--;
        if (m2==2) {
          if (leap(y1)) {
            d1=29;
          } else {
            d1=28;
          }
        } else {
          d1 = months[m1];
        }
      }
    } else {
      d1--;
    }

    printf("%d\n", count_number(d2,m2,y2) - count_number(d1,m1,y1));
  }
  return 0;
}

// second solution setter solutions
