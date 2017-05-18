/*
Jack is awesome. His friends call him little Einstein. To test him, his friends gave him a string. They told him to add the string with its reverse string and follow these rules:

    Every ith character of string will be added to every ith character of reverse string.
    Both string will contain only lower case alphabets(a-z).
    Eg:- a+a=b,a+c=d,z+a=a (Refer to sample test cases for more details)

Input:

First line contains a value N denoting number of test cases. Next N lines contains string str.

Output:

For every string str output the string that Jack's friends wants from him.

Constraints

1 <= N <= 10

1 <= str <= 10^5
 */
#include<stdio.h>
#include<string.h>
int main() {
  int t,  i, sum, string_length;
  char input[100001];
  scanf("%d", &t);
  while(t--) {
    scanf("%s", input);
    string_length = strlen(input);
    for(i=0;i< string_length;i++ ) {
      sum = input[i] + input[string_length -1-i]-192;
      if (sum > 26)
        sum -=26;
      printf("%c", sum + 96);
    }
    printf("\n");
  }
  return 0;
}
