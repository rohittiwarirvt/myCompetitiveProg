#include<stdio.h>
#include<string.h>
int main(){
  char input_string[100001];
  int input_string_length,i;
  long long count;
  scanf("%[^\n]s", input_string);
  printf("%s\n", input_string);
  input_string_length= strlen(input_string);
  for(i=0;i<input_string_length;i++) {
    if (input_string[i]==32) {
      count++;
    }
  }

  printf("%lld\n", count);
  return 0;
}
