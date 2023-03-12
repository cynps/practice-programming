#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

ll X;

int solve() {
  int ans = 1;
	for (ll i = 100; i<X; ++ans) {
		i += i / 100;
	}
	ans--;
  return ans;
}

int main() {
  cin >> X;

  int ans = solve();

	// cout << fixed << setprecision(20);
  cout << ans << endl;
  return 0;
}
