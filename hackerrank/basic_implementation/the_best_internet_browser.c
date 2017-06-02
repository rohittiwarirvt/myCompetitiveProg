#include<stdio.h>
#include<string.h>
int main() {
  int t,i,original_str_length,abbreviated_str_length;
  char input_string[1000], abbreviated_str[1000];
  scanf("%d", &t);
  while(t--) {
    scanf("%s", input_string);
    original_str_length = strlen(input_string);
    for(i=0;i<original_str_length;i++){
      if (input_string[i] =='a' ||input_string[i] =='e' || input_string[i] =='i' || input_string[i] =='o' ||input_string[i] =='u' )
        continue;
      abbreviated_str[i] = input_string[i];
    }
    abbreviated_str[i] = '\0';
    abbreviated_str_length = strlen(abbreviated_str);
    printf("%d/%d\n", abbreviated_str_length,original_str_length);
  }
  return 0;
}
