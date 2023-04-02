#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull; // ull 0 - 1 = 18446 74407 37095 51615 ≒ 1.8 * 10^19

ll N, M;

int main() {
	cin >> N >> M;
	ll rootM = sqrt(M);

	if (N < rootM) {
		cout << -1 << endl;
		return 0;
	}

	ll ans = 1e15+7;
	for (ll i = 1; i<=N; ++i) {
		ll x = M / i;
		if (M % i > 0) x++;
		// cout << i << " " << x << " " << M / i << endl;
		if (x <= N && x * i >= M) ans = min(ans, x*i);
		if (i > rootM) break;
	}

	if (ans == 1e15+7) cout << -1 << endl;
	else cout << ans << endl;

	return 0;
}
