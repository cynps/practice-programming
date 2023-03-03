#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;

int N, A[3][3][2];

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

  if (A[0][0][1] == 1 && A[0][1][1] == 1 && A[0][2][1] == 1 ) ans = 1;
  if (A[1][0][1] == 1 && A[1][1][1] == 1 && A[1][2][1] == 1 ) ans = 1;
  if (A[2][0][1] == 1 && A[2][1][1] == 1 && A[2][2][1] == 1 ) ans = 1;

  if (A[0][0][1] == 1 && A[1][0][1] == 1 && A[2][0][1] == 1 ) ans = 1;
  if (A[0][1][1] == 1 && A[1][1][1] == 1 && A[2][1][1] == 1 ) ans = 1;
  if (A[0][2][1] == 1 && A[1][2][1] == 1 && A[2][2][1] == 1 ) ans = 1;

  if (A[0][0][1] == 1 && A[1][1][1] == 1 && A[2][2][1] == 1 ) ans = 1;
  if (A[2][0][1] == 1 && A[1][1][1] == 1 && A[0][2][1] == 1 ) ans = 1;

  return ans;
}

int main() {
  rep(i,0,3) rep(j,0,3) {
    cin >> A[i][j][0];
    A[i][j][1] = 0;
  }
  cin >> N;

  rep(i,0,N) {
    int k;
    cin >> k;
    rep(i,0,3) rep(j,0,3) {
      if (A[i][j][0] == k) A[i][j][1] = 1;
    }
  }

  int ans = solve();
  if (!ans) cout << "No" << endl;   
  else cout << "Yes" << endl;   
  // cout << ans << endl;
  return 0;
}
