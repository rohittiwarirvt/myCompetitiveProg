/*Problem Statement
Fredo lives in a building with N+1 floors and his apartment is at floor N. The floors are numbered from 0 to N, N being the highest floor. Fredo has just come from school and is at floor 0. His favourite anime is about to start and he wants to reach his apartment as soon as possible.
He can either use staircase or elevator or a combination of both (use staircase for x

floors and cover rest floors by elevator) to reach his apartment.

    If he uses staircase, he takes f

amount of time to reach floor f from floor f−1

    .
    Elevator takes 1 unit time to go from any floor to it's neighbouring floors.

The elevator currently is coming down from floor N
.The elevator stops at the floor where the elevator button is pressed .From this floor, the elevator goes to floor N .
Tell him what is the minimum time he needs to reach floor N from floor 0

.

Assumptions: Only Fredo uses the elevator during that period of time. Fredo will press the elevator button atmost once. If Fredo presses the elevator button at floor x
, then the elevator needs to be at a floor ≥x

.

Input Format:
The first line consists of an integer T
denoting the number of test cases.
The only line of each test consists of an integer N

denoting the number of floors.

Output Format:
For each test case, print the minimum time Fredo needs to reach floor N
from floor 0

in a separate line.

Input Constraints:
1≤T≤1000

1≤N≤109

Sample Input
3
2
6
9

SAMPLE OUTPUT

2
8
12

 Explanation

Test case 1:
N=2
Fredo reaches 1st floor from floor 0 in 1 unit time. At this time, he presses the elevator button and the elevator stops there as it was also at that floor (because the elevator had started coming downwards the moment Fredo started to take the staircase, so in 1 unit of time, Fredo and elevator both reach floor 1). Then , he uses elevator to go to the second floor from 1st floor which also takes 1 unit of time.
So, answer= 1 + 1

Test case 2:
N = 6
Fredo reaches floor 2 at time = 3 (because he takes 1 unit of time for 1st floor and 2 units of time for 2nd floor when using staircase).
Elevator also reaches floor 2 at time 4. (Fredo waits for 1 unit of time at floor 2).
Then elevator reaches floor 6 from floor 2 in 4 units of time.
Fredo takes the elevator from this floor. So , total time = 4 + 4 =8

*/
// first Solution
#include<stdio.h>
int main() {
  int t,n,i,j, time,lift, fredo;
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    lift =0;
    fredo=0;
    for(i=1;i<=n;i++) {
      lift = n-i;
      fredo = fredo +i;
      //printf("%d %d\n", lift, fredo );
      if (fredo > lift) {
        lift = lift+1;
        fredo = fredo -i;
        //printf("%d %d\n", lift, fredo );
        break;
      }
    }

    if (fredo ==lift || n==1) {
      time = fredo +lift;
      printf("%d\n", time);
    } else {
      time = fredo+lift+(lift-fredo);
      printf("%d\n", time);
    }
  }
  return 0;
}


// second solution
/*
int main() {
  int t,j,n,f,i;
  scanf("%d", &t);
  for(i=0;i<t;i++){
    scanf("%d", &n);
    if (n==1) {
      printf("1\n");
    } else {
      for (j=0;i<n;j++) {
        if ((j*(j+1)/2<=(n-j)) && ((j+2)*(j+1)/2>=(n-j))) {
          f=j;
          break;
        }
      }
      printf("%d\n", 2*(n-f));
    }
  }
}
*/
