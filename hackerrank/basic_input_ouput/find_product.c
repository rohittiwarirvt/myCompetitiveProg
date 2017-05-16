#include<stdio.h>

int main() {
  int size,i, arr[10001] ;
  long long product;
  product =1;
  scanf("%d", &size);
  for(i=0; i< size; i++) {
    scanf("%d", &arr[i]);
    product = product* arr[i] % (1000000000+7);
  }
  // find product
  printf("%lld", product);
  return 0;
}
