#include <bits/stdc++.h>
using namespace std;

#define rp(i,n) for (int i=0; i<(n); ++i)

string S;

int main() {
	cin >> S;

	int ans = 1;
	int b1 = -1, b2 = -1;
	int r1 = -1, r2 = -1;
	int k = -1;
	rp(i,S.length()) {
		if (S[i] == 'B') {
			if (b1 == -1) b1 = i;
			else b2 = i;

		} else if (S[i] == 'R') {
			if (r1 == -1) r1 = i;
			else r2 = i;

		} else if (S[i] == 'K') {
			k = i;

		}
	}

	if (b1 % 2 == b2 % 2) ans = 0;

	if (k < r1 || r2 < k) ans = 0;


	if (ans == 1) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
