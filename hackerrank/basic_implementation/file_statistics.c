#include<stdio.h>
int main() {
  int t;
  char a[100];
  scanf("%d", &t);
  printf("%d\n", t);
  getchar();
  fgets(a, 100, stdin);
  //scanf("%[^\n]%*c", a);
  printf("%s\n", a);
  return 0;
}
