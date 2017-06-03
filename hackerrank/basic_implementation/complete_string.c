#include<stdio.h>
#include<string.h>
int main() {
  int t,i,input_string_length,flag[26];
  char input_string[1000];

  scanf("%d", &t);
  while(t--){
    for(i=0;i<26;i++) {
      flag[i] =0;
    }
    scanf("%s", input_string);
    input_string_length = strlen(input_string);
    for(i=0;i<input_string_length;i++) {
      flag[input_string[i] - 'a'] = 1;
    }

    for(i=0;i<26;i++){
      if(flag[i] ==0)
        break;
    }
    if (i==26){
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
  return 0;
}
