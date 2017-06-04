#include<stdio.h>
#include <climits>
int bound(long long x, long long y, long long n, long long m) {
  return x<=n && y<=m && x>=1 && y>=1;
}

int main() {
  int t, x , y, N,M,i;
  long long cur_start_x, cur_start_y, number_of_cards_on_deck, steps_made_samu, mid,low, high;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &N, &M);
    cur_start_y=cur_start_x=1;
    scanf("%lld", &number_of_cards_on_deck);
    steps_made_samu =0;
    while(number_of_cards_on_deck) {
      scanf("%d %d", &x, &y);
      low =0;
      high =INT_MAX;
      for(i=0;i<50;i++) {
        mid = (low+high)/2;
        if (bound(x*mid+cur_start_x, y*mid*cur_start_y, N, M)) {
          low = mid;
        } else {
          high = mid;
        }
        cur_start_x= cur_start_x + low*x;
        cur_start_y = cur_start_y + low*y;
        steps_made_samu += low;
      }
    }
    printf("%lld\n", steps_made_samu);
  }
  return 0;
}
