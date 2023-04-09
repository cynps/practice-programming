#include <bits/stdc++.h>
using namespace std;

#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)

int N,D;

int main() {
	cin >> N >> D;
	int T[N];
	rp(i,N) cin >> T[i];
	int now = T[0];
	rep(i,1,N) {
		if (T[i] - now <= D) {
			cout << T[i] << endl;
			return 0;
		}
		now = T[i];
	}

	cout << -1 << endl;

	return 0;
}
