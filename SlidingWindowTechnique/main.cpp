#include<iostream>

using namespace std;

const int NMAX=100;
int freq[NMAX];


int slidingWindowTechnique(int *input, int sizeOfArray, int uniqueCount) {
  int ans =0, right, current_count =0;

  for(right=1; right <= sizeOfArray ; right++) {
    if(++freq[input[right]] == 1)
      current_count++;
    if(current_count > uniqueCount  )
      break;
  }
  if (current_count <= uniqueCount)
    return sizeOfArray;
  if ( --freq[input[right--]] == 0)
    current_count--;
  ans = right;
  for(int left =2 ; left <= sizeOfArray; left++) {
    if (--freq[input[left-1]] == 0)
      current_count--;
    while(right < sizeOfArray) {
      right++;
      if(++freq[input[right]] == 1)
        current_count++;
      if(current_count > uniqueCount)
        break;
    }
    if(current_count <= uniqueCount)
      return max(ans, sizeOfArray - left +1);
    if(--freq[input[right--]] == 0)
      current_count--;
    ans = max(ans, right-left + 1);

  }
  return ans;


}
int main() {
  int input[NMAX] = {1, 5,2,1,7,2,1,5,5,7}, sizeofArray=10, uniqueCount=3;
  cout << slidingWindowTechnique(input, sizeofArray,uniqueCount);
  return 0;
}
