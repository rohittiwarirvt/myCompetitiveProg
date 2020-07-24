#include <iostream>

using namespace std;

const int NMAX = 1001;

int rowSize, columnSize, maxLength[NMAX][NMAX]; /// maxLength[i][j] = max. x such as  ( i - x + 1, j - x + 1) --->
                                                /// (i, j) full of 1s
                                                /// maxLen[i][j] = min(maxLength[i-1][j], maxLength[i][j-1], maxLength[i-1][j-1]) +1,
                                                /// input[i][j]=1 or 0 , otherwise

bool input[NMAX][NMAX] ;

int maxSizeSquare(bool input[][NMAX], int rowSize, int columnSize) {
  int ans = 0;
  for(int i=1; i <= rowSize;i++) {
    for(int j =1; j<= columnSize; j++) {
      if(input[i][j] == false) {
        maxLength[i][j] = 0;
      } else {
        maxLength[i][j] = min(maxLength[i-1][j], min(maxLength[i][j-1], maxLength[i-1][j-1])) +1;
        ans = max(ans,   maxLength[i][j]);
      }
    }
  }
  return ans;
}

int main()
{
  cin >> rowSize >> columnSize;
  for(int i=1;i<= rowSize; i++)
    for(int  j=1;j<=columnSize;j++)
      cin >> input[i][j];
  cout << "Answer" << maxSizeSquare(input, rowSize, columnSize)<< endl;
  return 0;
}
