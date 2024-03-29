#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

int N;

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
	rep(i,-200, 200) rep(j, -200, 200) {
		int ans = pow(i, 5) - pow(j, 5);
		if (ans == N) {
			cout << i << " " << j << endl;
			return 0;
		}
	}
  return ans;
}

int main() {
  cin >> N;

  int ans = solve();

	// cout << fixed << setprecision(20);
  // cout << ans << endl;
  return 0;
}
