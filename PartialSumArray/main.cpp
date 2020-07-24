#include <iostream>

using namespace std;

const int Nmax = 100005;
int partialSum[Nmax];

void buildPartialSumArray(int origin[], int n) {
  partialSum[0] = origin[0];
  for(int i=1;i < n;i++) {
    partialSum[i] = partialSum[i-1] + origin[i];
  }
}

long long querySum(int start, int end) {
  if (start > end){
    cout << "invalid input"<< endl;
    return NULL;
  }


  return partialSum[end]- partialSum[start -1];
}

int main()
{
  int inputArray[8] = {7,-2, 3, 9 , -11, 5, 1, -3};
  buildPartialSumArray(inputArray, 8);
  cout<< "Array are stored from index 0 so the sum of index will be based on those context"<< endl;
  cout << "The sum for two nubmer is " <<querySum(3, 7);
  return 0;
}
