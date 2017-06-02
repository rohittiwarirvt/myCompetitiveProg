#include<stdio.h>
#define MAX 100000
int main() {
  int tower_height, no_of_chances,  i, j,broke_tower=0,level,space_remaning;
  long long tower[MAX][2];
  char block;
  scanf("%d", &tower_height);

  scanf("%d", &no_of_chances);
  for(int i=0;i<tower_height;i++) {
    tower[i][0]=tower[i][1]=tower[i][2]=1;
  }
  i=0;
  while(i<no_of_chances) {
    i++;
    scanf("%d %c", &level, &block);
    level = level-1;
    switch(block) {
      case 'L':
        tower[level][0]=0;
        break;
      case 'R':
        tower[level][2]=0;
        break;
      case 'M':
        tower[level][1]=0;
      default:
      break;
    }

    space_remaning=3;
    j=0;
    while(j<3){
      j++;
      printf("%d tower level %lld\n",level, tower[level][j]);
      if (tower[level][j]==0){
        space_remaning--;
      }
    }
    printf("%d\n",space_remaning);

    if (space_remaning<2){
      broke_tower = 1;
      break;
    }
  }
  printf("%d Broke tower man\n", broke_tower );
  if(broke_tower) {
    printf("%d", i);
  } else {
    printf("-1");
  }
  return 0;
}
