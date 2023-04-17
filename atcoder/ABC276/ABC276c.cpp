#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> P(N);
	for (int i=0; i<N; ++i) cin >> P[i]; 
	bool ok = false;
	do {
		if (ok) {
			for (int i=0;i<N;++i) {
				cout << P[i] << " \n"[i+1==N];
			}
			return 0;
		}
		ok = true;
	} while (prev_permutation(P.begin(), P.end()));
	return 0;
}
