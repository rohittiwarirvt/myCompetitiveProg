#include<stdio.h>
int main() {
  int t, num_of_computers, num_of_pendrive, minute, pendrive_with_content, computer_with_content,flag=0;
  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &num_of_computers, &num_of_pendrive);
    flag =0;
    if (num_of_computers ==1 ) {
      printf("0\n");
      continue;
    }
    pendrive_with_content=computer_with_content=1;
    minute=0;
    while(1) {
      computer_with_content = computer_with_content + pendrive_with_content /2;
      minute++;
      if (pendrive_with_content > num_of_pendrive) {
        flag =1;
        break;
      }
      pendrive_with_content = pendrive_with_content*2;
      if (computer_with_content >= num_of_computers)
        break;
    }

    if (!flag || computer_with_content >= num_of_computers) {
      printf("%d\n", minute );
    } else {
      minute = minute + (num_of_computers - computer_with_content)/num_of_pendrive + ((num_of_computers- computer_with_content) % num_of_pendrive !=0);
      printf("%d\n", minute);
    }
  }
  return 0;
}
