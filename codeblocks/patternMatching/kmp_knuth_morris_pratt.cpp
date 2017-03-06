// c++ program for knuth morris pratt algorithm pattern searching
// http://www.geeksforgeeks.org/searching-for-patterns-set-2-kmp-algorithm/

#include <string.h>
#include <stdio.h>
void computeLPSArray(char *pat, int pat_len, int *lps);


// Prints occurrences of txt[] in pat[]
void KMPSearch(char *pat, char *txt)
{
  int pat_len = strlen(pat);
  int txt_len = strlen(txt);

  // create lps that will hold the longest prefix suffix values for pattern

  int lps[pat_len];

  // preprocess the pattern (calculate lps[] array)
  computeLPSArray(pat, pat_len, lps);

  int j =0 ,i = 0;

  while ( i < txt_len) {
    if (pat[j] == txt[i]) {
      j++;
      i++;
    }

    if ( j == pat_len) {
      printf("Found  pattern at index %d \n", i - j );
      j = lps[j-1];
    } else if ( i < txt_len && pat[j] != txt[i])
    {
       // Do not match lps[0..lps[j-1]] characters,
       // they will match anyway
       if ( j != 0) {
          j = lps[j-1];
       } else {
          i = i +1;
       }
    }
  }
}



// Fills lps[]  for given pattern pat[0.. pat_len -1]

void computeLPSArray(char *pat, int pat_len, int *lps)
{
  // length of the previous longest prefix suffix
  int len =0;
  lps[0] = 0;

  // the loop calculates lps[i] for i =1 to pat_len -1
  int i = 1;
  while (i < pat_len) {
    if ( pat[i] == pat[len])
    {
      len++;
      lps[i] = len;
      i++;
    } else { // (pat[i] != pat[len])
      // this is tricky . consider the example.
      // AAACAAAA and i =7. The idea is similar
      // to search step.
      if ( len != 0) {
        len = lps[len -1];
      } else {
        lps[i] = 0;
        i++;
      }
    }
  }
}

int main()
{
  char txt[] = "ABABDABACDABABCABAB";
  char pat[] = "ABABCABAB";
  KMPSearch(pat, txt);
  return 0;
}
