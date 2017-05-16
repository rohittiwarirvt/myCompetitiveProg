#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int upperprime(int k) {
  int i, j, is_prime;
  for ( i = k; i < 123; i++) {
    is_prime =1;
    for (j = 2; j <= sqrt(i);j++) {
      if( i%j ==0){
        is_prime = 0;
        break;
      }
    }
    if (is_prime) {
      return i;
    }
  }
}

int lowerprime( int k) {
  int i, j, is_prime;
  for( i =k ; i> 1; i--) {
    is_prime =1;
    for ( j =2; j <= sqrt(i); j++) {
      if (i % j ==0) {
        is_prime = 0;
        break;
      }
    }
    if (is_prime) {
      return i;
    }
  }
}

int magic(int k) {
  int upper_prime = upperprime(k);
  int lower_prime = lowerprime(k);

  if (k < 67)
    return 67;
  if (k > 113)
    return 113;

  if (abs(k-upper_prime) > abs(k-lower_prime)) {
    return lower_prime;
  }else if (abs(k-upper_prime) < abs(k-lower_prime)) {
    return upper_prime;
  } else {
    return lower_prime;
  }
}

int main() {
  int t;
  scanf("%d", &t);
  while( t >0) {
    int n;
    scanf("%d", &n);

    char s[n+1];
    scanf("%s", s);
    int i;

    for (i=0; i< n ; i++) {
      int k = s[i];
      s[i] = magic(k);
    }

    printf("%s\n", s);
    t--;
  }
  return 0;
}
