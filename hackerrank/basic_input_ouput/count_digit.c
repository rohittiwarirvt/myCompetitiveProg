#include <stdio.h>
#include <string.h>
int main() {
  int N= 100, input_length, i;
  char input[N];
  int output[10] = {0};
  scanf("%s", input);
  input_length = strlen(input);
  for(i=0;i < input_length; i++) {
    switch(input[i]) {
      case '0':
        output[0]++;
      break;
      case '1':
        output[1]++;
      break;
      case '2':
        output[2]++;
      break;
      case '3':
        output[3]++;
      break;
      case '4':
        output[4]++;
      break;
      case '5':
        output[5]++;
      break;
      case '6':
        output[6]++;
      break;
      case '7':
        output[7]++;
      break;
      case '8':
        output[8]++;
      break;
      case '9':
        output[9]++;
      break;
    }
  }

  for (i=0;i<10;i++) {
    printf("%d %d\n",i,output[i]);
  }
  return 0;
}
