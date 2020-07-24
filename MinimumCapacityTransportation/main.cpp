#include <iostream>

using namespace std;
const int NMAX = 10001;

int weighted[NMAX], numberOfBox, capacityOfTruck;

int sumOfWeights(int weighted[], int numberOfBox) {
  int sum =0;
  for(int i =1; i <= numberOfBox; i++)
    sum +=weighted[i];
  return sum;
}
int maxValue(int weighted[], int numberOfBox) {
  int maxValue = 0;
  for(int i=1; i <= numberOfBox; i++)
    maxValue = max(weighted[i], maxValue);
  return maxValue;
}

bool iscapacityOfTruckCorrect(int weighted[], int numberOfBox, int capacityOfTruck, long long newCapacity){
  long long sum=0;
  int ridesCount=1;
  for(int i=1; i <= numberOfBox;i++) {
    if( sum + weighted[i] <= newCapacity) {
      sum += weighted[i];
    } else {
      ridesCount++;
      sum = weighted[i];
    }
  }
  return ridesCount <= capacityOfTruck;
}

long long bSearch(int weighted[], int numberOfBox, int capacityOfTruck) {
  long long left = maxValue(weighted, numberOfBox), ans =0, right= sumOfWeights(weighted, numberOfBox);

  while (left <= right) {
    long long  mid = (left + right)/2;
   if(iscapacityOfTruckCorrect(weighted, numberOfBox,capacityOfTruck, mid )) {
     ans = mid;
     right = mid - 1;
   } else {
     left = mid + 1;
   }
  }
  return ans;
}

int main()
{
  numberOfBox = 0;
  cin >> numberOfBox >> capacityOfTruck;
  for(int i= 1;i <= numberOfBox; i++ )
    cin >> weighted[i];
  cout << bSearch(weighted, numberOfBox, capacityOfTruck) << endl;
  return 0;
}
