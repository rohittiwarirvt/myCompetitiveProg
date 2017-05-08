  // referring http://www.geeksforgeeks.org/searching-for-patterns-set-3-rabin-karp-algorithm/

// Following program is c implementation of Rabin Karp Algorithm given in the CLRS book

#include <stdio.h>
#include <string.h>

// num_of_character is the characters in input alphabet
#define num_of_character 256

/*
  pat -> pattern
  txt -> text
  q -> A prime number
 */

void search(char pat[], char txt[], int q)
{
  int pat_len = strlen(pat);
  int txt_len = strlen(txt);

  int i, j;
  int pat_hash = 0; // hash value for pattern
  int text_hash = 0; // hash value for txt
  int hash = 1;

  // the value of h would be "pow(d, pat_len -1) %q"
  for (i = 0 ; i < pat_len -1 ; i++) {
    hash = (hash*num_of_character)%q;
  }

  // calculate the hash value of pattern and first
  // window of text
  for ( i = 0 ; i < pat_len ; i++) {
    pat_hash = (num_of_character * pat_hash + pat[i])%q;
    text_hash = (num_of_character *text_hash + txt[i])%q;
  }

  // slide the pattern over text one by one
  for (i =0 ; i <= txt_len - pat_len; i++) {
    // check the hash values of current window of text
    // and pattern. if the hash values match then only
    // check for characters on by one
    if ( pat_hash == text_hash) {
      // check for characters one by one
      for (j =0; j < pat_len ; j++) {
        if ( txt[ i + j] != pat[j])
          break;
      }

      // if p == t and pat[0... pat_len-1] = txt[i, i+1, ... i +pat_len-1]
      if (j == pat_len) {
        printf("Pattern found at index %d \n", i);
      }
    }

    // calculate hash value for next window of text: Remove
    // leading digit, and trailing digit
    if ( i < txt_len - pat_len)
    {
      text_hash = (num_of_character*(text_hash - txt[i] * hash) + txt[i + pat_len]) %q;

      // we might get negative value of t, converting it
      // to positive
      if ( text_hash < 0) {
        text_hash = (text_hash +q);
      }
    }
  }
}


// Driver program to test above function

int main()
{
  char txt[] = "GEEKS FOR GEEKS";
  char pat[] = "GEEK";
  int q = 101; // a prime number
  search(pat, txt, q);
  return 0;
}
