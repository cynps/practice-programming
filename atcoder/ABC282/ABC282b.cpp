#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;}

int N,M;

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int main() {
	cin >> N >> M;
	string S[N];
	rp(i,N) cin >> S[i];

	int ans = 0;
	rep(i,0,N-1) rep(j,i+1,N) {
		bool ok = true;
		rep(k,0,M) {
			if (S[i][k] == 'x' && S[j][k] == 'x') {
				ok = false;
				break;
			}
		}
		if (ok) ans++;
	}

	// cout << alpint('A') << " " << alpint('Z') << endl; // 1 26

	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
	cout << ans << endl;

	return 0;
}
