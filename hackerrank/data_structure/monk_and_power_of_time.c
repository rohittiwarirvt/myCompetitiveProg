#include<stdio.h>
#define MAX 100
int main() {
  int temp,number_of_processes, i, j, given[MAX], ideal[MAX], process_counts;

  scanf("%d", &number_of_processes);

  for (i=0;i< number_of_processes;i++){
    scanf("%d", &given[i]);
  }
  for (i=0;i< number_of_processes;i++){
    scanf("%d", &ideal[i]);
  }
  process_counts =0;

  //printf("Sir we r clear\n");
  for(i=0;i<number_of_processes;i++) {
    //printf("F => g %d => i %d \n", given[j], ideal[j]);
    if (given[i] == ideal[i]) {
      process_counts++;
     // printf("pr %d\n", process_counts );
    } else {
      temp = given[i];
      for(j=i;j<number_of_processes;j++) {
        given[j] = given[j+1];
        //process_counts++;
      }
      given[j++]= temp;
      process_counts++;
      i--;
    }

  }
  printf("%d", process_counts-1);
  return 0;
}
/*

10
5 4 8 9 1 6 3 2 7 10
1 6 8 9 5 4 10 3 2 7
 ans 27
 */
