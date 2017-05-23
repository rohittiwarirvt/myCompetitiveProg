#include<stdio.h>
#include<string.h>
#define MAX 101
#define SIZE 50
int matches_dislikes(char to_check[], char disliked_words[][SIZE], int num_dislike_word ) {
  int i, matched =-1;
  for ( i = 0; i < num_dislike_word; i++)
  {
   // printf("%s %s %d\n", to_check, disliked_words[i], strcmp(to_check, disliked_words[i]));
    if (strcmp(to_check, disliked_words[i]) ==0) {
      matched =1;
      break;
    }
  }
  return matched;
}
int main() {
  int i,num_dislike_word,abbreviation_count=0,word_count_sentence;
  char disliked_words[MAX][SIZE], sentence[MAX][SIZE];
  int abbreviation[MAX];
  scanf("%d", &num_dislike_word);
  for(i=0;i<num_dislike_word;i++) {
    scanf("%s", disliked_words[i]);
  }

  scanf("%d", &word_count_sentence);
  for(i=0;i<word_count_sentence;i++) {
    scanf("%s", sentence[i]);
    if (matches_dislikes(sentence[i], disliked_words, num_dislike_word) == -1) {
      abbreviation[abbreviation_count++] = sentence[i][0]-32;
    }
  }

  for(i=0;i<abbreviation_count;i++) {
    if(i == abbreviation_count-1)
      printf("%c", abbreviation[i]);
    else
      printf("%c.", abbreviation[i]);
  }
  printf("\n");
  return 0;
}
