#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;

int T; 

ll min(ll a, ll b) {
	if (a > b) return b;
	else return a;
}

ll max(ll a, ll b) {
	if (a < b) return b;
	else return a;
}

ll solve(ll a, ll b, ll c) {
	if (a == b && b == c) return 0;

	// ll minx = min(a, min(b, c));
	// ll maxx = max(a, max(b, c));
	// ll midx = a + b + c - minx - maxx;
	// ll dist = (maxx - midx) + (maxx - minx);

	ll d = a + b + c;
	if (d % 3 != 0) {
		return -1;
	}

	bool e = true;
	if (a % 2 == b % 2 && c % 2 == b % 2) e = false;
	if (e) return -1;

	d /= 3;

	// dist /= 6;
	// if (maxx == midx || midx == minx) {
	// 	dist *= 2;
	// }

	ll ans = abs(a - d) + abs(b - d) + abs(c - d);
	ans /= 4;

	return ans;
}

int main() {
  cin >> T;
	ll x1[T], x2[T], x3[T];

	rep(i,0,T) cin >> x1[i] >> x2[i] >> x3[i];

	rep(i,0,T) {
	  ll ans = solve(x1[i], x2[i], x3[i]);
		cout << ans << endl;
	}

	// cout << fixed << setprecision(20);
  return 0;
}
