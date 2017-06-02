#include<stdio.h>
#define MAX 1000
int main() {
  int i, j, k, num_of_students, special_number,sum;
  int student_personality[MAX],pair[MAX][MAX];
  scanf("%d %d", &num_of_students, &special_number);
  for(i=0;i<num_of_students;i++)
    scanf("%d", &student_personality[i]);

  for(i=0;i<special_number;i++)
  {k=0;
    for(j=0;j<num_of_students;j++) {

      if (student_personality[j] % special_number == i) {
        pair[i][k++] = j;
      }
    }
    pair[i][k++] = -1;
  }
  sum =0;
  for(i=0;i<special_number;i++) {
    j=0;
    while(pair[i][j] !=-1) {
      //printf("%d\t", pair[i][j]);
      j++;
    }
    //printf("%d %d\n",(j-1)*j,j);
    sum=sum + ((j-1)*j);
   // printf("sum => %d\n", sum);
  }
  printf("%d\n", sum);
  return 0;
}
