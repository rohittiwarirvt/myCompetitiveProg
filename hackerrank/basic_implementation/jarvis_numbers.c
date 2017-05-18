/*

After defeating Mandarin in Iron man 3, Jarvis is most of time free and now he has started playing with numbers. Jarvis being an AI (Artificial Intelligence) solves almost all the riddle given by Tony Stark very quickly. This time Tony gave him a problem about base conversion’s but the problem statement given by Tony seems to be confusing and Jarvis asked for Help! Problem Statement – “123 when converted in base 16, it consist of two digits 7 and 11 so the sum of the numbers is 18,(For Given N) Find denominator of average(irreducible form) of sum of all the numbers formed on conversions from base 2 to N-1”.

Can you help Jarvis?

Input:

First line will have the number of test case (t) and then t subsequent lines will contain a number N

.

Output:

For every test case, give answer in new line.

Constraints:
T<10

3<=N<=1000
input
2
5
7

output
3
1

Tony stark wants Jarvis to convert the number to all the bases from 2 to n-1 and find the sum of all the numbers formed in between.

Here this code is self explanatory.
 */
#include<stdio.h>
int gcd(int n1, int n2) {
  if (n2 !=0)
    return gcd(n2, n1%n2);
  else
    return n1;
}
int main() {
  int t, i, n , temp, c, sum, common_factor, ans;
  scanf("%d", &t); // Take input from user
  while(t--) {  // loop for t test cases
    sum=0;      // Sum variable as average = sum/n-2
    scanf("%d", &n); // Take n as input
    for(i=2;i<=n-1;i++) { // loop for changing number n to all bases from 2 to n-1
      temp =n; // storing at temporary variable
      c=0; // to find the sum of all the numbers formed on conversions and there sum c =0
      while(temp >0) {
        c+=temp%i;
        temp=temp/i;
      }
      sum+=c;  // Adding sum of each conversion to total
    }
    common_factor = gcd(sum, n-2); // Common factor in sum and n-2 to find the irreducible form of average
    ans = (n-2)/common_factor;
    printf("%d\n", ans);
  }
  return 0;
}
