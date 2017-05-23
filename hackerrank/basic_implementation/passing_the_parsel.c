/*
Brief Description:

Given (N)

the number of students in the class and the lyrics of the song,
you have to find out the roll number of the student who wins the game.
(Determine the last person who didn't get out of the game).

Pre-requisites: Basic Programming Skills, Implementation Skills.

Difficulty Level: Easy.

Hints: Continue looping until there is only one person in the game.
Make a boolean array for persons who got out of the game.
 */
#include<stdio.h>
#include<string.h>
int remove_student(int c[], int index, int n) {
  int i;
  for(i=index+1;i<=n;i++) {
    c[i-1] = c[i];
  }
  n--;
  return n;
}
int main() {
  int student_count,i,current_student_index,current_lyrics_pos,lyrics_length;
  char lyrics[1001];
  int students_in_game[1001];
  scanf("%d", &student_count);
  for(i=1;i<= student_count;i++) {
    students_in_game[i] =i;
  }
  scanf("%s", lyrics);
  lyrics_length = strlen(lyrics);
  current_lyrics_pos=0;
  current_student_index =1;
  //j=1;
  while(student_count > 1) {
    if(lyrics[current_lyrics_pos] == 'b') {
      student_count = remove_student(students_in_game, current_student_index, student_count);
      current_student_index--;
    }
    current_lyrics_pos = (current_lyrics_pos +1)%lyrics_length;
    current_student_index = current_student_index +1;
    if (current_student_index > student_count) {
      current_student_index= current_student_index- student_count;
    }
  }
  printf("%d\n",students_in_game[1]);
  return 0;
}
