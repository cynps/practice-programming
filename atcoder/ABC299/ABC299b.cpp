#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define rp(i,n) for (int i=0; i<(n); ++i)

ll N, T;

int main() {
	cin >> N >> T;
	ll C[N], R[N];
	rp (i,N) cin >> C[i];
	rp (i,N) cin >> R[i];

	ll p1c = C[0];
	ll ansmax = -1;
	ll p1cmax = -1;
	ll ansplayer = 0;
	ll p1cplayer = 1;

	rp (i,N) {
		if (C[i] == T && ansmax < R[i]) {
			ansmax = R[i];
			ansplayer = i + 1;

		} else if (C[i] == p1c && p1cmax < R[i]) {
			p1cmax = R[i];
			p1cplayer = i + 1;
		}
	}

	if (ansmax != -1) cout << ansplayer << endl;
	else cout << p1cplayer << endl;

	return 0;
}
