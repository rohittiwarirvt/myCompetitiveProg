#include<stdio.h>
int main() {
  int t, i, j,friends_gift_demand[1000], SUM =0;
  int FLAG=0,START,number_of_friends, pratiks_budget;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &number_of_friends, &pratiks_budget);
    for(i=0;i< number_of_friends;i++){
      scanf("%d", &friends_gift_demand[i]);
    }
    SUM = friends_gift_demand[0];
    START=0;
    for(i=0;i<number_of_friends;i++){

      while(SUM > pratiks_budget) {
        SUM-=friends_gift_demand[START];
        START++;
      }

      if (SUM == pratiks_budget) {
        FLAG = 1;
        break;
      }
      SUM+=friends_gift_demand[i];
    }

    while(SUM > pratiks_budget) {
      SUM-=friends_gift_demand[START];
        START++;
    }

    if (SUM== pratiks_budget)
      FLAG=1;

    if (FLAG) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }

  }
  return 0;
}
