#include <iostream>

const int NMAX = 100001;
using namespace std;

long long maxSubArray(int input[], int n) {
  long long sum =0, ans;
  ans = input[1];
  for(int i=1; i<= n; i++) {
    sum += input[i];
    if (sum > ans) {
      ans = sum;
    }
    if ( sum <0) {
      sum = 0;
    }
  }
  return ans;
}
int main()
{
    int n, input[NMAX];
    cin >> n;
    for(int i=1; i<= n; i++) {
      cin >> input[i];
    }
    cout << "Max sub Array is " << maxSubArray(input, n) << endl;
    return 0;
}

/*
6

1 2 4 -3 4 6
*/
