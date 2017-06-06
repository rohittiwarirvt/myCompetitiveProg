#include<stdio.h>
int main() {
  int t,N,M,i;
  long long cur_start_x, x , y,  cur_start_y, number_of_cards_on_deck, steps_made_samu;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &N, &M);
    cur_start_y=cur_start_x=1;
    scanf("%lld", &number_of_cards_on_deck);
    steps_made_samu =0;
    while(number_of_cards_on_deck--) {
      scanf("%lld %lld", &x, &y);
      printf("input\n" );
      while(1) {
        if (cur_start_x > N || cur_start_x <=0) {
          cur_start_x= cur_start_x-x;
          cur_start_y= cur_start_y-y;
          steps_made_samu--;
          printf("x=>count ni value=%lld (%lld,%lld)\n",steps_made_samu,cur_start_x,cur_start_y);
          break;
        }
        if (cur_start_y >M || cur_start_y<=0){
          cur_start_y= cur_start_y-y;
          cur_start_x= cur_start_x-x;
          steps_made_samu--;
          printf("y=>count ni value=%lld (%lld,%lld)\n",steps_made_samu,cur_start_x,cur_start_y);
          break;
        }
        cur_start_x= cur_start_x + x;
        cur_start_y = cur_start_y + y;
        steps_made_samu++;
         printf("common=>count ni value=%lld (%lld,%lld)\n",steps_made_samu,cur_start_x,cur_start_y);
      }
    }
    printf("Final Count=>%lld\n", steps_made_samu);
  }
  return 0;
}
