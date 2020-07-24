#include <iostream>

using namespace std;

const int NMAX = 10001 ;
int hayStack[NMAX], inputSize;
int binarySearch(int haystack[], int inputSize, int needle) {
  int left =1, right = inputSize, middle;

  while(left< right) {
    middle = (left +right)/2;
    if (needle == haystack[middle] ) {
      return middle;
    } else if (needle < haystack[middle] ){
      middle = (left + (middle -1))/2;
    } else {
      middle = ((middle+1) + right )/2;
    }
  }

  return -1;

}

int main()
{
    cin >> inputSize;
    for(int i =1; i<= inputSize; i++)
      cin >> hayStack[i];
    cout << "" << endl;
    return 0;
}
