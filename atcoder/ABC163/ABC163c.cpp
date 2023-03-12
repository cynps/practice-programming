#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

int N, A[201010];

int solve() {
  int ans = 0;
	vector<int> a(N);
	rep(i,0,N) a[i] = 0;
	rep(i,0,N-1) a[A[i]-1]++;
	rep(i,0,N) cout << a[i] << endl;
  return ans;
}

int main() {
  cin >> N;
	rep(i,0,N-1) cin >> A[i];

  int ans = solve();

	// cout << fixed << setprecision(20);
  // cout << ans << endl;
  return 0;
}
