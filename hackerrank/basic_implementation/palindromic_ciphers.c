#include<stdio.h>
#include<math.h>
#include<string.h>
int is_palindrome(char input[], int max) {
  int i, j,is_palindrome=1;
  for (i=0,j=max-1;i< sqrt(max);i++,j--){
    if (input[i] == input[j]) {
      continue;
    } else {
      is_palindrome = 0;
      break;
    }
  }
  return is_palindrome;
}

int main() {
  int t,i,j,in_palindrome,str_length;
  long long int product;
  char input[10];
  scanf("%d", &t);
  while(t--) {
    scanf("%s", input);
    str_length = strlen(input);
    in_palindrome = is_palindrome(input, str_length);
    if (in_palindrome) {
      printf("Palindrome\n");
    } else {
      product=1;
      for(i=0;i<str_length;i++) {
       // printf("%d\n", input[i] -'a' +1 );
        product *= input[i] -'a' +1;
      }
      printf("%lld\n", product);
    }
  }
  return 0;
}
