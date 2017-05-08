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
dost aya tha, uskein sath gaya tha wagholi mein mera flat dikhanein and urmila ko milnein gaya tha on saturday, plus movie friday do 10gb kein movie dowload marein thein

4 moviews dekthein

sahi thein alien walein

tuh bata bhai


Yes, completing the NFL FLAG coach form creates an account on USA Football and the coach can login using provided credentials in email.
Rohit has sought the Text changes for  *new user* in email received as pointed out in comment https://usafootball.atlassian.net/browse/FLAGPPK-548?focusedCommentId=57114&page=com.atlassian.jira.plugin.system.issuetabpanels%3Acomment-tabpanel#comment-57114 ?
