#include <iostream>

using namespace std;
const int NMAX= 10000;

long long findMaxSumSequenceSubArray(int input[], int n) {
  if (n == 0)
    return 0;
  long long partialSumArray[NMAX], minInPartialSum=0, ans=input[1];
  partialSumArray[1] = input[1];
  for(int i=2; i<= n;i++) {
    partialSumArray[i] = partialSumArray[i-1] + input[i];
  }

  for(int i=1; i<=n ;i++) {
    if (ans < partialSumArray[i]- minInPartialSum) {
      ans =  partialSumArray[i]- minInPartialSum;
    }
    if (minInPartialSum > partialSumArray[i]) {
      minInPartialSum = partialSumArray[i];
    }
  }
  return ans;
}

int main()
{
    int n, input[NMAX];
    cin >> n;
    for(int i=1; i <=n ; i++) {
      cin >> input[NMAX];
    }
    cout << "Max Sum Sequence SubArray is " << findMaxSumSequenceSubArray(input, n) << endl;
    return 0;
}

/**
6
-1 5 4 3 1 -5
- 4 8 11 12 7

**/
