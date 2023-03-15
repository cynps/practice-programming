#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;

int N,M;

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
  cin >> N >> M;
  vector<int> a(M);
  for (auto& x : a) cin >> x;
  
  vector<int> re(N+1);
  for (auto& x : a) re[x] = 1;

  vector<int> ans;
  for (int i=1, j=1; i<=N; i = ++j) {
    while (re[j]) j++;
    for (int k=j; k>=i; k--) ans.push_back(k);
  }

  rep(i,0,N) cout << ans[i] << " \n"[i+1==N];

  // if (M == 0) {
  //   rep(i,1,N) cout << i << " ";
  //   cout << N << endl;
  //   return 0;
  // }

  // int ans = solve();
  // cout << ans << endl;
  return 0;
}
