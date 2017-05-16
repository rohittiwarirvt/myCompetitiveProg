#include<stdio.h>
#include<string.h>

int main() {
  char str[10];
  int i, halfway, strlength,isPalidrome;
  scanf("%s", str);
  isPalidrome = 1;

  strlength = strlen(str);
  halfway = strlength/2;
  for (i =0; i< halfway; i++){
    if (str[i] != str[strlength -1 -i]) {
      isPalidrome = 0;
      break;
    }
    i++;
  }
  printf("%s\n", isPalidrome ? "YES":"NO");
  return 0;
}
