#include<iostream>

using namespace std;

int f[100],exp[100], len;

void calcPrimeFactorization(int n) {
  if (n ==1 ) {
    len++;
    f[len] = 2;
    exp[len] =0;
  }
  int d = 2;
  while(n > 1 && d*d <= n) {
    int k = 0;
    while(n%d == 0 ) {
      k++;
      n/=d;
    }

    if (k > 0) {
      f[len] = d;
      exp[len] = k;
      len++;
    }

    d++;
  }
 if (n > 1) {
  f[len] = n;
  exp[len] = 1;
  len++;
 }


}

int main() {
  calcPrimeFactorization(150);
  for(int i =0 ; i < len; i++) {
    cout << f[i] << " " << exp[i] << "\n" ;
  }
  return 0;
}
