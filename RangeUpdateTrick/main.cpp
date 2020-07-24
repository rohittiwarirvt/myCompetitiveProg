#include <iostream>

using namespace std;
const int NMAX = 100000;

int inputArray[NMAX], intermediateArray[NMAX], partialSum[NMAX], finalSumArray[NMAX];

void updateIntermediateArray(int start, int end, int updateValue) {
  intermediateArray[start] += updateValue;
  intermediateArray[end + 1] -= updateValue;
}
void buildPartialSumArray(int origin[], int n) {
  partialSum[0] = origin[0];
  for(int i=1;i < n;i++) {
    partialSum[i] = partialSum[i-1] + origin[i];
  }
}

void buildFinalArray(int n){
  for(int i=1; i<=n; i++) {
    finalSumArray[i] = finalSumArray[i-1] + partialSum[i];
    inputArray[i] +=finalSumArray[i];
  }
}

int main()
{
  int inputValue[] = {0, 2, -7, 10, 3, -1, 19, -20, 23, 17 };
  for(int i=0; i<9; i ++ ) {
    inputArray[i] = inputValue[i];
  }
  int n =9;
  updateIntermediateArray(3, 7, 5);
  updateIntermediateArray(4, 8, 2);
  updateIntermediateArray(2, 6, -1);
  buildPartialSumArray(intermediateArray, 9);
  buildFinalArray(9);

  for(int i=1; i <=9 ; i++ )
    cout<< inputArray[i] <<" ";

  cout<< endl;
  return 0;
}
