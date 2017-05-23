#include<stdio.h>
#include<string.h>
int main() {
  int distinct_pair,i,j,str_length,k,l,result=0;
  char random_sequence[5001];
  int alphabets[25];
  scanf("%d", &distinct_pair);
  scanf("%s", random_sequence);
  str_length = strlen(random_sequence);
  for(i=0;i<str_length;i++) {
    k=0;
    for(l=0;l<26;l++) {
      alphabets[l] =0;
    }
    for (j=i;j<str_length;j++) {
      alphabets[random_sequence[j] -'a']++;
      if ( alphabets[(random_sequence[j]-'a')] == 1) {
        k++;
      }
      if (k==distinct_pair) {
        result++;
      }
    }
  }
  printf("%d\n",result);
  return 0;
}

