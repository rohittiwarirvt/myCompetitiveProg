#include<stdio.h>
int main() {
  int t,i,f=-1, ammo_count, number_obstacles,hit_array[100001];
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &ammo_count);
    scanf("%d", &number_obstacles);
    for(i=0;i<number_obstacles;i++) {
      scanf("%d", &hit_array[i]);
      if (hit_array[i] == 0) {
        ammo_count-=1;
      } else if (hit_array[i] ==1) {
        ammo_count+=2;
      }
     // printf("%d\n", ammo_count);
      if (ammo_count ==0 && i < number_obstacles-1) {
        f = i+1;
        break;
      }
    }

    if( f== -1) {
      printf("Yes %d\n", ammo_count);
    } else {
      printf("No %d\n", f);
    }
  }
  return 0;
}
