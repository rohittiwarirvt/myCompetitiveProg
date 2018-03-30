#include<stdio.h>
#include<stdlib.h>

int strlen (char *s) {
  char *p;
  int count=0;
  p=s;

  while(*p !='\0') {
    count++;
    p++;
  }
  return count;
}

int main () {
  char *s;
  int x=1;
  int *xp;
  int test[] = {10,20,30};
  int *textp = test;
  typedef struct{
    int x;
    int y;
  } point;
  //point p = {1, 2};
  //point *q = &p;
  //q->x=3;
  //printf("Enter string\n");
  s = (char*)malloc(10*sizeof(s));
  //scanf("%s", s);
  textp = test;
  printf("%d %d %d ", *(++textp), *(++textp), *(textp));
  xp = &x;
  //printf("%d\n", *xp);
  *xp = 20;
  //printf("%d %d\n", *xp, x );
  //printf("%s\n", s);
  //xp = &x;
  //*xp= *xp +1;
  //printf("%d %d\n",x, *xp);
  //printf("%d", strlen(s));
  //printf("%d %d\n", q->x, p.x );
  return 0;
}

/*
Exercise

Exercise 12453

Write a C program to read through an array of any type using pointers. Write a C program to scan through this array to find a particular value.

Exercise 12454

Write a program to find the number of times that a given word(i.e. a short string) occurs in a sentence (i.e. a long string!).

Read data from standard input. The first line is a single word, which is followed by general text on the second line. Read both up to a newline character, and insert a terminating null before processing.

Typical output should be:

        The word is "the".
        The sentence is "the cat sat on the mat".
       The word occurs 2 times.
Exercise 12455

Write a program that takes three variable (a, b, b) in as separate parameters and rotates the values stored so that value a goes to be, b, to c and c to a.
 */
