#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll A, B;

int main() {
	cin >> A >> B;
	if (A == B) {
		cout << 0 << endl;
		return 0;
	}

	ll ans = 0;
	while (A != B) {
		if (A % B == 0 || B % A == 0) {
			if (A % B == 0) {
				ans += A / B - 1;
				break;

			} else {
				ans += B / A - 1;
				break;

			}

		} else {
			if (A > B) {
				ll tmp = A / B;
				ans += tmp;
				A -= tmp * B;

			} else {
				ll tmp = B / A;
				ans += tmp;
				B -= tmp * A;

			}
		}
	}

	cout << ans << endl;

	return 0;
}
