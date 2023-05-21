#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll A, B;
int main() {
	cin >> A >> B;
	ll ans = A / B;
	if (A % B != 0) ans++;

	cout << ans << endl;

	return 0;
}
