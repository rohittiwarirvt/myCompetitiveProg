#include <iostream>

using namespace std;

const int NMAX=10005;

int animalsInBox[NMAX], numberOfBox, numberOfDistinctAnimals;

long long sumOfAll(int animalsInBox, int numberOfBox) {
  long long sum =0;
  for(int i=1; i<= numberOfBox; i++)
    sum+=animalsInBox[i];
  return sum;

}

bool isValidCombination(int animalsInBox[], int numberOfBox, int numberOfDistinctAnimals, long long  numberOfAnimalsWeCanHold){
  long long cnt =0;
  for(int i =1; i<= numberOfDistinctAnimals; i++) {
    cnt += min(numberOfAnimalsWeCanHold, 1LL*animalsInBox[i]);
  }
  return cnt >= 1LL*numberOfAnimalsWeCanHold*numberOfDistinctAnimals;

}

int bSearch(int animalsInBox, int numberOfBox, int numberOfDistinctAnimals){
  long long left =0, right = sumOfAll(animalsInBox, numberOfBox), ans = 0;

  while(left <= right) {"
    long long mid = (left+right)/2;
    if (isValidCombination(animalsInBox, numberOfBox, numberOfDistinctAnimals, mid)){
      ans = mid;
      left = mid +1;
    } else {
      right= mid -1;
    }

  }
  return ans;
}

int main()
{
    cin >> numberOfBox >> numberOfDistinctAnimals;

    for(int i=1;i <=; i++)
      cin>> animalsInBox[i];
    cout << bSearch(animalsInBox, numberOfBox, numberOfDistinctAnimals);
    return 0;
}
