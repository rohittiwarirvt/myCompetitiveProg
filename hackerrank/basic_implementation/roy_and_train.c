#include<stdio.h>
#include<math.h>
int main() {
  int t;
  int time_to_react_station_a, departure_time_t1, departure_time_t2,
  average_velocity_v1, average_velocity_v2,distance_a_to_b, train_1_time_take,train_2_time_take;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d %d %d %d %d", &time_to_react_station_a, &departure_time_t1, &departure_time_t2,&average_velocity_v1, &average_velocity_v2,&distance_a_to_b);
    if (time_to_react_station_a < departure_time_t1 || time_to_react_station_a < departure_time_t2){
      train_1_time_take = ceil(((float)distance_a_to_b/average_velocity_v1)*60) + departure_time_t1;
      train_2_time_take = ceil(((float)distance_a_to_b/average_velocity_v2)*60) + departure_time_t2;

     // printf("%f %d\n", ceil((float)distance_a_to_b/average_velocity_v2*60), (ceil((float)distance_a_to_b/average_velocity_v2)*60));
      if (train_1_time_take < train_2_time_take) {
        printf("%d\n", train_1_time_take);
      } else {
        printf("%d\n", train_2_time_take);
      }
    } else {
      printf("-1\n");
    }

  }
      return 0;
}
