/*
This time your task is simple.

Given two integers X
and K, find the largest number that can be formed by changing digits at atmost K places in the number X

.

Input:

First line of the input contains two integers X
and K

separated by a single space.

Output:

Print the largest number formed in a single line.

Constraints:

    1≤X≤1018

0≤K≤9

4483 2
9983
 */
#include<stdio.h>
#include<string.h>
int main() {
  int K,i , str_length;
  char string[19];
  scanf("%s", string);
  scanf("%d", &K);
  str_length = strlen(string);
  for (i=0;i<str_length && K >0;i++) {
    if (string[i] =='9'){
      continue;
    }
    else {
      string[i]='9';
      K--;
    }
  }

  printf("%s\n", string);

  return 0;
}

/*
Editorials solutions


    #include<bits/stdc++.h>
    using namespace std;
    #define ff first
    #define ss second
    #define pb push_back
    #define mp make_pair
    #define all(x) x.begin(),x.end()
    #define sz(x) ((int)x.size())
    #define eps 1e-9
    const int MOD = 1e9+7;
    typedef long long ll;
    typedef pair<int,int> pii;
    ll POWER[65];
    ll power(ll a, ll b) {ll ret=1;while(b) {if(b&1) ret*=a;a*=a;if(ret>=MOD) ret%=MOD;if(a>=MOD) a%=MOD;b>>=1;}return ret;}
    ll inv(ll x) {return power(x,MOD-2);}
    void precompute() {
      POWER[0]=1;
      for(int i=1;i<63;i++) POWER[i]=POWER[i-1]<<1LL;
    }
    int main() {
      // freopen("T ASK.in","r",stdin);freopen("TASK.out","w",stdout);
      precompute();
      ll n,k;
      cin>>n>>k;
      assert(n>=1LL and n<=1000000000000000000LL);
      assert(k>=0 and k<=9);
      vector<int> v;
      while(n) {
        v.pb(n%10);
        n/=10;
      }
      reverse(all(v));
      for(int i=0;i<sz(v) and k--;i++) {
        if(v[i]==9) {
          k++;
          continue;
        }
        else v[i]=9;
      }
      for(auto it:v) cout<<it;
      cout<<endl;
      return 0;
    }


Tester solutions
    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        string s;
        int k;

        cin >> s >> k;

        assert(k >= 0 && k <= 9);
        assert(s.size() >= 1 && s.size() <= 19);

        if ( s.size() == 19 ) assert(s == "1000000000000000000");

        for ( int i = 0; i < s.size(); i++ ) assert(s[i] >= '0' && s[i] <= '9');

        for ( int i = 0; i < s.size() && k > 0; i++ ) {
            if ( s[i] == '9' ) continue;
            s[i] = '9', k--;
        }

        cout << s << endl;

        return 0;
    }



 */
