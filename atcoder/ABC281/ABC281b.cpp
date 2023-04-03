#include <bits/stdc++.h>
using namespace std;

#define rp(i,n) for (int i=2; i<(n); ++i)

string S;

void answer(bool ok) {
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main() {
	cin >> S;

	bool ok = false;
	if (S.length() != 8) {
		answer(ok);
		return 0;
	}

	if (isdigit(S[0]) || isdigit(S[7])) {
		answer(ok);
		return 0;
	}

	if (!isdigit(S[1])) {
		answer(ok);
		return 0;

	} else {
		if (S[1] == '0') {
			answer(ok);
			return 0;
		}
	}

	rp(i, S.length()-3) {
		if(!isdigit(S[i])) {
			answer(ok);
			return 0;
		}
	}

	answer(true);

	return 0;
}
