#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll A, B;

double f(ll n) {
	return (double) A / sqrt(n + 1) + (double) B * n;
}

int main() {
	cin >> A >> B;
	ll l = 0, r = A / B;
	while (r - l > 2) {
		ll m1 = (l * 2 + r) / 3;
		ll m2 = (l + r * 2) / 3;
		if (f(m1) > f(m2)) l = m1;
		else r = m2;
	}
	double ans = A;
	for (ll i = l; i <= r; ++i) ans = min(ans, f(i));

	cout << fixed << setprecision(10) << ans << endl;
	return 0;
}
