#include<iostream>

using namespace std;

const int Nmax = 105;
int fr[Nmax] ;


void findNumber(int n) {
  int curr_rem = 0;
  for (int i= 1; i <= n; i++) {
    curr_rem = (curr_rem*10 + 1) % n;

    if ( curr_rem == 0 ) {
      for (int j =1 ; j <=i; j++) {
        cout << 1;
      }
      return;
    }

    if ( fr[curr_rem] !=0) {
      for (int j =1; j<= i- fr[curr_rem] ;j++) {
        cout << 1;
      }
      for ( int j=1; j <= fr[curr_rem];j++) {
        cout << 0;
      }
      return;
    }
    fr[curr_rem] = i;
  }
}

int main() {

  int n;
  cin >> n;
  findNumber(n);
  return 0;
}
