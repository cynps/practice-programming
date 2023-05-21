#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; ++i)

int N,M;

int main() {
	cin >> N >> M;
	vector<string> S(N);
	rep(i,0,N) cin >> S[i];
	sort(S.begin(), S.end());

	do {
		bool ans = true;
		rep(i,0,N-1) {
			int diff = 0;
			rep(j,0,M) {
				if (S[i][j] != S[i+1][j]) diff++;
			}
			// cout << S[i] << endl << S[i+1] << endl;
			if (diff > 1) {
				ans = false;
			}
		}
		// cout << endl;
		if (ans) {
			cout << "Yes" << endl;
			return 0;
		}

	} while (next_permutation(S.begin(), S.end()));
 
	cout << "No" << endl;
	return 0;
}
