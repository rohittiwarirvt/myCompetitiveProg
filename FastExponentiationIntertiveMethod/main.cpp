#include <iostream>

using namespace std;

int fastExponentiationIterative(int base, long long exp, int MOD) {
  int ans = 1;

  while( exp >= 1) {
    if ( exp % 2 == 0) {
      base = (1LL*base*base)%MOD;
      exp/=2;
    } else {
       ans = (1LL * base * ans) % MOD;
       exp--;
    }
  }
  return ans;
}

int main()
{
    cout << fastExponentiationIterative(2, 4, 10000000007) << endl;
    return 0;
}
