#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

int N,M;

int main() {
	cin >> N >> M;
	int a[M][N];
	rep (i,0,M) rep (j,0,N) {
		cin >> a[i][j];
		a[i][j];
	}

	map<pair<int,int>,int> cnt;
	rep (i,1,N) rep (j,i+1,N+1) {
		cnt.insert({{i, j},0});
		// cout << i << " " << j << endl;
	}
	// cout << "---" << endl;

	rep (i,0,M) rep (j,0,N-1) {
		// cout << a[i][j] << " " << a[i][j+1] << endl;
		int tmpi = min(a[i][j],a[i][j+1]);
		int tmpj = max(a[i][j],a[i][j+1]);
		cnt.at({tmpi,tmpj})++;
	}	

	int ans = 0;
	for (auto it : cnt) {
		// cout << it.first.first << " " << it.first.second << " : " << it.second << endl;
		if (it.second == 0) ans++;
	}

	cout << ans << endl;

	return 0;
}
