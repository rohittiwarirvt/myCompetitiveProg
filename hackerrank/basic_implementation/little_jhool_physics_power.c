#include<stdio.h>
int main() {
  char bin[101];
  int is_lucky =1,i,j;
  scanf("%s", bin);
  for(i=0;bin[i] != '\0';i++) {
    j=0;
    while (bin[i] == bin[i+j] && j<6)
      j++;
    if(j==6){
      is_lucky =0;
      break;
    }

  }
  is_lucky  ? printf("Good luck!\n"):printf("Sorry, sorry!\n");
  return 0;
}
//11000000011
//100000111110
