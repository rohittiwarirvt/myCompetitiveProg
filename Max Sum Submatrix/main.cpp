#include <iostream>

using namespace std;

const int NMAX=101,MMAX=101;

long long upSum[NMAX][MMAX]; // upSum[i][j] = upSum[i][] + upSum[1][j] + upSum[2][j] + .... + upSum[i][j]
// upSum[i][j] = upSum[i-1][j] + input[i][j];
int input[NMAX][MMAX], rowSize, ColumnSize;

long long maxSumSubarray(long long interMediater[], int n) {
  long long ans = interMediater[1], sum =0;
  for(int i=1; i <=n;i++) {
    sum += interMediater[i];
    ans = max(ans, sum);
    if (sum < 0) {
      sum = 0;
    }
  }
  return ans;
}


long long maxSumSubmatrix() {
   for(int i =1; i <=rowSize;i++)
    for(int j =1;j<=ColumnSize;j++)
        upSum[i][j] = upSum[i-1][j] + input[i][j];

  long long v[MMAX]; // v[i] = input[r1][c1] + input[r1+1][c1] + input[r1 +2][c2] + ... +  input[r2][c2];
  long long ans = input[1][1];
  for(int r1=1;r1 <= rowSize; r1++) {
    for(int r2=r1; r2 <=rowSize;r2++) {
      for(int i=1;i<= ColumnSize; i++) {
        v[i] = upSum[r2][i] - upSum[r1 -1 ][i];
      }
      ans = max(ans, maxSumSubarray(v, ColumnSize));
    }
  }
  return ans;

}
int main()
{
    cin >> rowSize >> ColumnSize;
    for(int i = 1; i <= rowSize; i++)
        for(int j = 1; j <= ColumnSize; j++)
            cin >> input[i][j];
    cout << maxSumSubmatrix();
    return 0;
}
