#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main() {
	cin >> N >> S;
	int ans = -1;
	int count = 0;
	bool kusi = false;
	for (int i=0; i<N; ++i) {
		if (S[i] == 'o') {
			count++;
			if (i + 1 == N) {
				ans = max(ans, count);
				count = 0;
			}
		}
		else {
			kusi = true;
			if (count > 0) {
				ans = max(ans, count);
				count = 0;
			}
		}
	}

	if (kusi) cout << ans << endl;
	else cout << -1 << endl;

	return 0;
}
