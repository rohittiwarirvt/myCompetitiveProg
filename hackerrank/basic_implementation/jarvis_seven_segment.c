/*
All over the world, peoples are working on energy solution. It would be a tough time for our next generation to survive if we don’t think about solution. Tony stark is working on a new project and wants to display his project using “seven segment display - concept”. Tony Stark gave Jarvis a task to find a number from his Favorite list of number for which the energy consumption is lowest.

(Assuming that for a digit to represent Tony stark is using 7 bulbs and only those bulbs light up which are required to represent a number and rest other would be completely off.)

Help Jarvis and conserve energy.

Seven segment display - https://en.wikipedia.org/wiki/Seven-segment_display

enter image description here

Input:
First line will contain the number of test cases and for every test case first line will contain length of favorite list and the second line for a test case will contain n numbers

Output:
For every test case print the answer. If there exist more than 1 numbers for which same number of bulbs are required than output the number which occurs first in the Favorite list.

Constraints:
Test cases< 10
A[i] < 10^6
Size of list < 10^5

Sample input
1
5
1 2 3 4 5

Output
1
 */
#include<stdio.h>
int main() {
  int i, t, c, lights,min, n;
  long long b[1000001], temp,number;
  int led[] = {6,2, 5, 5, 4, 5, 6,3,7,6}; // to repressent 0 we need 6 bulbs, for 1 we need 2 and so on
  scanf("%d", &t);
  while(t--) {
    scanf("%d", &n);
    for (i=0;i<n;i++) {
      scanf("%lld", &b[i]);
    }

    for(i=0;i<n;i++) {
      temp = b[i];
      lights =0;
      if (temp ==0) {
        lights= led[0];
      }
      while(temp >0) {
        temp = temp%10;
        lights+=led[temp];
        temp/=10;
      }

      if (i ==0) {
        min=lights;
        number = b[i];
      }

      if (min > lights) {
        min = lights;
        number = b[i];
      }
    }
    printf("%lld\n", number);
  }
  return 0;
}
