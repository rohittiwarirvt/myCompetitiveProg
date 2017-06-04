#include<stdio.h>
int main(){
  int t, flag=0, steps_take_till_now, days_in_year,distance_each_day[1000],i,j, milestone;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &days_in_year);

    for(i=0;i< days_in_year;i++){
      scanf("%d", &distance_each_day[i]);
    }
    scanf("%d", &milestone);
    steps_take_till_now=0;
    for(i=0;i<days_in_year;i++){
      steps_take_till_now+=distance_each_day[i];
      if (steps_take_till_now>= milestone) {
        flag=1;
        break;
      }
    }

    if (flag) {
      printf("%d\n", i+1);
    } else {
      milestone = milestone % steps_take_till_now;
      steps_take_till_now =0;
      for(i=0;i<days_in_year;i++) {
          steps_take_till_now +=distance_each_day[i];
          if (steps_take_till_now >= milestone) {
            flag =1;
            break;
          }
      }
      if (milestone!=0) {
        printf("%d\n", i+1 );
      } else {
        steps_take_till_now =0;
        for(i=0;i<days_in_year;i++) {
          if (distance_each_day[i] > 0) {
            steps_take_till_now =i;
          }
          printf("%d\n", steps_take_till_now+1 );
        }
      }

    }
  }
  return 0;
}
