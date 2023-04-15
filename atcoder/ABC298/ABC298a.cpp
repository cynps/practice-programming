#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ld PI = 3.141592653589793;

#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)

inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;} // A = 1
inline char intalp(int i) {return (char)i+64;} // 1 = A

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int N;
string S;

int main() {
	cin >> N >> S;
	bool ryou = false;
	bool ka = false;
	bool fuka = false;

	rp(i,N) {
		if (S[i] == 'o') ryou = true;
		if (S[i] == '-') ka = true;
		if (S[i] == 'x') fuka = true;
	}

	int ans = 0;
	if (ryou && !fuka) ans = 1;

	// cout << alpint('A') << " " << alpint('Z') << endl; // 1 26

	if (ans == 1) cout << "Yes" << endl;
	else cout << "No" << endl;
	// cout << fixed << setprecision(20);
	// cout << ans << endl;

	return 0;
}
