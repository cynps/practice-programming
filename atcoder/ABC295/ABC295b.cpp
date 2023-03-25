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

int R,C;
char B[20][20];

void check4(int i, int j, int count) {
	if (i > 0) if (B[i-1][j] == '#') B[i-1][j] = '.';
	if (j > 0) if (B[i][j-1] == '#') B[i][j-1] = '.';
	if (i < R - 1) if (B[i+1][j] == '#') B[i+1][j] = '.';
	if (j < C - 1) if (B[i][j+1] == '#') B[i][j+1] = '.';
	count--;
	if (count == 0) return;
	if (i > 0) check4(i-1, j, count);
	if (j > 0) check4(i, j-1, count);
	if (i < R - 1) check4(i+1, j, count);
	if (j < C - 1) check4(i, j+1, count);
	// check4(i-1, j, count);
	// check4(i, j-1, count);
	// check4(i+1, j, count);
	// check4(i, j+1, count);
	return;
}

int main() {
  cin >> R >> C;
	rp(i,R) rp(j,C) cin >> B[i][j];

	rp(i,R) rp(j,C) {
		if (B[i][j] == '.' || B[i][j] == '#') continue;
		int count = ctoi(B[i][j]);
		check4(i,j,count);
		B[i][j] = '.';
	}
	
	rp(i,R) {
		rp(j,C) cout << B[i][j];
		cout << endl;
	}

  return 0;
}
