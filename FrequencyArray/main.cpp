#include <iostream>

using namespace std;

const int Nmax = 100;

int main()
{
  int listArray[Nmax] = {1,2,3};
  int freqArray[Nmax] = {0};
  int distinct =0;
  for(int i=0;i <=Nmax;i++) {
    if (freqArray[listArray[i]] == 0){
      distinct++;
    }
    freqArray[listArray[i]]++;
  }

  cout << "Number of distict value "<< distinct << endl;
  return 0;
}
