// c program for Naive pattern Searching algorithm
// referring gfg http://www.geeksforgeeks.org/searching-for-patterns-set-1-naive-pattern-searching/
#include <stdio.h>
#include <string.h>

void search( char *pt, char *txt)
{
  int i,j;
  int pat_len = strlen(pt);
  int txt_len = strlen(txt);

  for ( i =0; i < txt_len - pat_len; i ++ ) {
    for ( j =0 ; j < pat_len ; j++) {
      if ( txt[i+j] != pt[j])
        break;
    }
    if ( j == pat_len) {
      printf("Pattern found at index %d \n", i);
    }
  }
}


int  main() {
  char txt[] = "AABAACAADAABAAABAA";
  char pt[] = "AABA";
  search(pt, txt);
  return 0;
}
