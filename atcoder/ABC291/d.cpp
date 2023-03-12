#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const ll mod = 1e9+7;
const int mod = 998244353;

int N, A[201010], B[201010];

ll modpow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n>0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

int solve() {
  int ans = modpow(2,N,mod);
  int count = 0;
  rep(i,0,N-1) {
    if (A[i] == A[i+1]) count += modpow(2, i, mod);
    if (A[i] == B[i+1]) count += modpow(2, i, mod);
    if (B[i] == A[i+1]) count += modpow(2, i, mod);
    if (B[i] == B[i+1]) count += modpow(2, i, mod);
  }
  ans -= count;
  return ans;
}

int main() {
  cin >> N;
  rep(i,0,N) cin >> A[i] >> B[i];

  int ans = solve();
  cout << ans << endl;
  return 0;
}
