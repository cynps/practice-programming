#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

ll N,X;

int solve() {
	int ans = 0;
	return ans;
}

int main() {
	cin >> N >> X;
	set<ll> A;
	rp (i,N) {
		ll t; cin >> t;
		A.insert(t);
	}

	for (auto p : A) {
		ll tmp = X + p;
		decltype(A)::iterator it = A.find(tmp);
		if (it != A.end()) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	
	cout << "No" << endl;

	// cout << alpint('A') << " " << alpint('Z') << endl; // 1 26
	// if (ok) cout << "Yes" << endl;
	// else cout << "No" << endl;

	return 0;
}
