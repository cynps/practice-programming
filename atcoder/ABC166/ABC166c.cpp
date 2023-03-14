#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

int N, M;

int solve() {
	int H[N], A[M], B[M];
	rep(i,0,N) cin >> H[i];
	rep(i,0,M) {
		cin >> A[i] >> B[i];
		--A[i];
		--B[i];
	}

	int count[N];
	rep(i,0,N) count[i] = 1;

	rep(i,0,M) {
		if (H[A[i]] <= H[B[i]]) count[A[i]] = 0;
		// else count[B[i]] = 0;
		if (H[B[i]] <= H[A[i]]) count[B[i]] = 0;

		// int hai = H[A[i]];
		// int hbi = H[B[i]];
		// int cai = count[A[i]];
		// int cbi = count[B[i]];
		// cout << "i:" << i << " hai:" << hai << " hbi:" << hbi << " cai:" << cai << " cbi:" << cbi << endl;
	}

  int ans = 0;
	rep(i,0,N) ans += count[i];

	// rep(i,0,N) cout << count[i] << " \n"[i+1==N];

  return ans;
}

int main() {
  cin >> N >> M;

  int ans = solve();

	// cout << fixed << setprecision(20);
  cout << ans << endl;
  return 0;
}
