#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll X,K;

int main() {
	cin >> X >> K;
	ll mod_i = 1;
	for (int i=1; i<=K;++i) {
		mod_i *= 10;
		ll tmp = X % mod_i;
		if (tmp < mod_i / 2) X = X - tmp;
		else X = X - tmp + mod_i;
	}

	cout << X << endl;

	return 0;
}
