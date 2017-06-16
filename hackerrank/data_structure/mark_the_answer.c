#include<stdio.h>
#include<malloc.h>
#define MAX 10000000
int main() {
  int question_asked, max_difficulty_level, i, points,unanswered_count;
  int *array_questions;

  scanf("%d %d", &question_asked, &max_difficulty_level);
  array_questions = (int*)malloc(MAX*sizeof(int));
  for(i=0;i < question_asked;i++) {
    scanf("%d", array_questions+i);
  }
  //for(i=0;i < question_asked;i++) {
    //printf("%d",array_questions[i]);
  //}
  //return 0;
  points =0;
  unanswered_count =0;
  for (i=0;i< question_asked && unanswered_count < 2;i++) {
    if (*(array_questions+i) <= max_difficulty_level){
      points = points +1;
    } else {
      unanswered_count++;
    }

  }
  printf("%d", points);
  return 0;
}
