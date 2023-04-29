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

int H,W;
vector<string> A(30),B(30),tmp(30);

int check() {
	int ans = 1;
	rp(i,H) if (A[i] != B[i]) ans = 0;
	return ans;
}

void tate() {
	rp(i,H) tmp[i] = A[i];
	rp(j,W) rp(i,H) {
		if (i+1==H) A[i][j] = tmp[0][j];
		else A[i][j] = tmp[i+1][j];
	}	
}

void yoko() {
	rp(i,H) tmp[i] = A[i];
	rp(i,H) rp(j,W) {
		if (j+1==W) A[i][j] = tmp[i][0];
		else A[i][j] = tmp[i][j+1];
	}	
}

int main() {
	cin >> H >> W;
	A.resize(H);
	B.resize(H);
	tmp.resize(H);

	rp(i,H) cin >> A[i];
	rp(i,H) cin >> B[i];	


	rp (i,H) {
		if (check()) {
			cout << "Yes" << endl;
			return 0;
		}
		tate();

		rp (j,W) {
			if (check()) {
				cout << "Yes" << endl;
				return 0;
			}
			yoko();
		}
	}

	cout << "No" << endl;

	// vector<int> ahc(W,0),bhc(W,0),awc(H,0),bwc(H,0);
	// rp(i,H) rp(j,W) {
	// 	if(A[i][j]=='#') {
	// 		ahc[j]++;
	// 		awc[i]++;
	// 	}
	// 	if(B[i][j]=='#') {
	// 		bhc[j]++;
	// 		bwc[i]++;
	// 	}
	// }

	// sort(ahc.begin(), ahc.end());
	// sort(bhc.begin(), bhc.end());
	// sort(awc.begin(), awc.end());
	// sort(bwc.begin(), bwc.end());

	// int ans = 1;
	// rp (i,H) if (awc[i] != bwc[i]) ans = 0;
	// rp (i,W) if (ahc[i] != bhc[i]) ans = 0;

	// if (ans) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
	// cout << ans << endl;

	return 0;
}


