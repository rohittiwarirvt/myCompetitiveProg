// http://www.geeksforgeeks.org/searching-for-patterns-set-5-finite-automata/
// Program for string searching using finite automata
//
#include <stdio.h>
#include <string.h>
#define NO_OF_CHARS 256

int getNextState(char *pat, int pat_len, int state, int x)
{
  // if the character c is same as next character in pattern,
  // then simply increment state
  if ( state < pat_len && x == pat[state]){
    return state +1 ;
  }

  int next_state, i; // next_state stores the result which is next state

  // next_state finally contains the longest prefix which is also suffix
  // in "pat[0.. state -1] c"
  for (next_state = state; next_state > 0 ; next_state--) {
    if (pat[next_state -1] == x) {
      for ( i = 0 ; i < next_state - 1; i++) {
        if (pat[i] != pat[state - next_state +1 +i]) {
          break;
        }
      }

      if ( i == next_state -1) {
        return next_state;
      }
    }
  }

  return 0;
}


// This function helps in building the tf table which represents finite automata for a  given pattern

void computeTF(char *pat, int pat_len, int TF[][NO_OF_CHARS])
{
  int state, x;
  for ( state = 0; state <= pat_len; ++state) {
    for (x =0; x < NO_OF_CHARS; ++x) {
      TF[state][x] = getNextState(pat, pat_len, state, x);
    }
  }

}


// prints all the occurence of patter in txt

void search(char *pat, char *txt)
{
  int pat_len = strlen(pat);
  int txt_len = strlen(txt);

  int TF[pat_len + 1][NO_OF_CHARS];

  computeTF(pat, pat_len, TF);

  // process txt over FA.
  int i, state=0;
  for( i = 0; i < txt_len; i++) {
    state = TF[state][txt[i]];
    if (state == pat_len) {
      printf("\n Pattern found at index %d", i -pat_len -1);
    }
  }
}


// Driver program to test the above function
//
int main()
{
  char txt[] = "AABAACAADAABAAABAA";
  char pat[] = "AABA";
  search(pat, txt);
  return 0;
}
