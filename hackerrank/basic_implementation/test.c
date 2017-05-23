#include<stdio.h>
#define SIZE 10
#define MAX 10
//http://ee.hawaii.edu/~tep/EE160/Book/chap9/subsection2.1.3.1.html#SECTION0013100000000000000
char *example(char s1[][SIZE],int count) {
  for (int i = 0; i < count; ++i)
  {
   printf("%s\n", s1[i]);
  }
 // printf("%s\n", s1);
}
int main() {
  char name[MAX][SIZE];
  printf("Please input your name\n");
  for(int i=0;i<10;i++) {
    scanf("%s", name[i]);
  }
  example(name,10);
  return 0;
}
