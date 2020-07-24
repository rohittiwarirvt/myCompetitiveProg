#include <iostream>

using namespace std;

int fastModuleExponentiation(int a, long long n, int MOD) {
  if (n == 0) {
    return 1;
  }
  if (n %2 == 0) {
    // a^n = (a^2)^(n/2) % MOD
    return fastModuleExponentiation((1LL *a*a) % MOD, n/2, MOD);
  }

  // a^n = a * a ^(n-1) %MOD
  return (1LL* a*fastModuleExponentiation(a, n-1, MOD)) % MOD;


}

int main()
{
  cout << fastModuleExponentiation(999999999999999999999999999999, 999999999999999999999999999999, 100000007) << "\n ";
  return 0;
}
