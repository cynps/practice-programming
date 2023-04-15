#include <bits/stdc++.h>
using namespace std;

#define rp(i,n) for (int i=0; i<(n); ++i)

int N;
int A[110][110], B[110][110];

bool solve(){
	rp(i,N) rp(j,N) if (A[i][j] == 1) if (B[i][j] == 0) return false;

	return true;
}

int main() {
	cin >> N;
	rp (i,N) rp(j,N) cin >> A[i][j];
	rp (i,N) rp(j,N) cin >> B[i][j];

	bool ans = solve();
	if (ans) {
		cout << "Yes" << endl;
		return 0;
	}

	rp(k,3) {
		int tmp[N][N];
		rp(i,N) rp(j,N) {
			tmp[i][j] = A[j][N-i-1];
		}
		rp(i,N) rp(j,N) {
			A[i][j] = tmp[i][j];
		}
		ans = solve();
		if (ans) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}
