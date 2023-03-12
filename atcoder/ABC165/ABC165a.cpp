#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

int K,A,B;

int solve() {
  int ans = 0;
	rep(i,A,B+1) {
		if (i % K == 0) {
			ans = 1;
			break;
		}
	}
  return ans;
}

int main() {
  cin >> K >> A >> B;

  int ans = solve();
	if (ans) cout << "OK" << endl;
	else cout << "NG" << endl;
	// cout << fixed << setprecision(20);
  // cout << ans << endl;
  return 0;
}
