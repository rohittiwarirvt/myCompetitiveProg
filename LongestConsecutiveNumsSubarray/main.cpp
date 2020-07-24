#include <iostream>

using namespace std;
const int NMAX=10000;
int n, input[NMAX];
bool freq[NMAX];

int longestSubsequenceNumsArray() {
  int ans = 0;
  for(int left=1;left<=n;left++) {
    for(int i=1; i<=n;i++) {
      freq[i] = false;
    }
    int Min=input[left], Max=input[left];
    for(int right=left;right <= n;right++){
      if (freq[input[right]] == true)
        break;
      freq[input[right]] = true;
      Min  = min(Min, input[right]);
      Max = max(Max, input[right]);
      if (right - left  == Max - Min){
        ans = max(ans, right - left +1);
      }
    }
  }
  return ans;
}
int main()
{
    cout << "Enter the number of items in array and hence the corresponding value" << endl;
    cin >> n;
    for(int i=1;i <= n; i++) {
      cin >> input[i];
    }
    cout << "Longest consecutive Nums SubArray" << longestSubsequenceNumsArray()<< endl;
    return 0;
}
