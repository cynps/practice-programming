#include <bits/stdc++.h>
using namespace std;
#define rp(i,n) for (int i=0; i<(n); ++i)

int N, H, W, X[1010];
string C[1010];

int main() {
	cin >> H >> W;
	rp(i,H) cin >> C[i];
	rp(i,H) X[i] = 0;

	rp(i,H) rp(j,W) if (C[i][j] == '#') X[j]++;
	rp(i,W) cout << X[i] << " \n"[i+1==W];

	return 0;
}
