#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;

int N;
string S;

ll modpow(ll a, ll n, int mod) {
  ll res = 1;
  while (n>0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

int solve() {
  int ans = 0;
  return ans;
}

int main() {
  cin >> S;
  rep(i,0,S.length()) S[i] = toupper(S[i]);

  // int ans = solve();
  cout << S << endl;
  return 0;
}
