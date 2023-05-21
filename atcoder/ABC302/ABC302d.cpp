#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,a,b) for(int i=a; i<b; ++i)

ll N,M,D;
int main() {
	cin >> N >> M >> D;
	vector<ll> A(N), B(M);
	rep (i,0,N) cin >> A[i];
	rep (i,0,M) cin >> B[i];
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());

	ll max_sum = -1;
	rep (i,0,N) {
		auto it = upper_bound(B.begin(), B.end(), A[i] + D);
		if (it != B.begin()) {
			--it;
			if (abs(A[i] - *it) <= D) max_sum = max(max_sum, A[i] + *it);
			// cout << i << ": " << A[i] << " " << B[i] << " " << max_sum << endl;
		}	
	}
	// cout << alpint('A') << " " << alpint('Z') << endl; // 1 26
	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
	cout << max_sum << endl;

	return 0;
}
