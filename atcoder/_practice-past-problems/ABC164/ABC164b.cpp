#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

int A,B,C,D;

int solve() {
  int ans = 0;
	int t = 1;
	while (true) {
		if (t % 2 == 0) A -= D;
		else C -= B;

		// cout << "t:" << t << " A:" << A << " C:" << C << endl;

		if (A <= 0 || C <= 0) break;
		t++;
	}
	if (A <= 0) cout << "No" << endl;
	else cout << "Yes" << endl;

  return ans;
}

int main() {
  cin >> A >> B >> C >> D;

  int ans = solve();

	// cout << fixed << setprecision(20);
  // cout << ans << endl;
  return 0;
}
