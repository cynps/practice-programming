#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull; // ull 0 - 1 = 18446 74407 37095 51615 ≒ 1.8 * 10^19
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;} // A = 1
inline char intalp(int i) {return (char)i+64;} // 1 = A

#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)

int H, W;

int main() {
	cin >> H >> W;
	string S[H];
	rp(i,H) cin >> S[i];

	rp(i,H) rp(j,W) {
		if (j + 1 < W) {
			if (S[i][j] == 'T' && S[i][j+1] == 'T') {
				S[i][j] = 'P';
				S[i][j+1] = 'C';
				j++;
			}
		}
	}	

	rp(i,H) cout << S[i] << endl;

	return 0;
}
