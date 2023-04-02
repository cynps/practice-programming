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
inline int alpint(char c) {return (int)c-64;} // A = 1
inline char intalp(int i) {return (char)i+64;} // 1 = A

int N;

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int main() {
	string S[8];
	rp(i,8) cin >> S[i];

	string ans = "";
	rp(i,8) rp(j,8) {
		if (S[i][j] == '*') {
			ans = 'a'+ j; 
			ans += itoc(8 - i);
		}
	}
	
	// cout << alpint('A') << " " << alpint('Z') << endl; // 1 26

	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
	cout << ans << endl;

	return 0;
}
