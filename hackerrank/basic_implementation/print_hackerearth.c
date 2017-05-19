/*As a beginner to the programming, Mishki came to Hackerearth platform, to become a better programmer. She solved some problems and felt very confident. Later being a fan of Hackerearth, she gave a problem to her friends to solve. They will be given a string containing only lower case characters (a-z), and they need to find that by using the characters of the given string, how many times they can print "hackerearth"(without quotes). As they are new to programming world, please help them.

Input:
The first line will consists of one integer N
denoting the length of string.
Next line will contain the string Str

containing only lower case characters.

Output:
Print one integer, denoting the number of times her friends can print "hackerearth" (without quotes).

Constraints:
1≤N≤106

Each character of string Str will be in range [a,z

SAMPLE INPUT
13
aahkcreeatrha
SAMPLE OUTPUT
1
*/
#include<stdio.h>
int main() {
  char input[100001];
  int occurence[10000]={0},i,cnt, n;
  scanf("%d",&n);
  scanf("%s", input);
  for(i=0;i<n;i++) {
    switch (input[i]) {
      case 'h':
        occurence[0]++;
      break;
      case 'a':
        occurence[1]++;
      break;
      case 'c':
        occurence[2]++;
      break;
      case 'k':
        occurence[3]++;
      break;
      case 'e':
        occurence[4]++;
      break;
      case 'r':
        occurence[5]++;
      break;
      case 't':
        occurence[6]++;
      break;
      default:
        break;
    }
  }
  occurence[0]/=2;occurence[1]/=2;occurence[4]/=2;occurence[5]/=2;
  cnt = occurence[0];
  for (i=0;i<7;i++) {
    if (cnt > occurence[i]) {
      cnt =occurence[i];
    }
  }
  printf("%d\n", cnt);
  return 0;
}
