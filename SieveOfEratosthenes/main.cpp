#include <iostream>

const int NMAX = 100001;

using namespace std;
int isPrime[NMAX];

void seiveOfErtosthenes(int number) {
  for(int i =0; i <=number; i++) {
    isPrime[i] =  true;
    for(int i = 2 ; i < number/2; i++) {
      if (isPrime[i] == true) {
        for(int j = i*2; j <= number; j+=i) {
          isPrime[j]= false;
        }
      }
    }
  }
}

int main()
{
    seiveOfErtosthenes(100);
    for(int i =0; i < 100; i++) {
      if(isPrime[i] == true) {
        cout << i << " ";
      }
    }
    return 0;
}

/*
  100

  2 4 6 2
  6 9 12
  4
  5 10 15

*/
