#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const ll mod = 1e9+7;
const int mod = 998244353;

ll N,K;

ll solve() {
  ll ans = 0;
  ll x = N % K;
  return min(x, K-x);
}

int main() {
  cin >> N >> K;
  ll ans = solve();
  cout << ans << endl;
  return 0;
}
