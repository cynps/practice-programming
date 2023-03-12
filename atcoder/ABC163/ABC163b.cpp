#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

int N, M, A[10010]; 

int solve() {
  int ans = 0;
	rep(i,0,M) ans += A[i];
	if (ans > N) return -1;
  else return (N - ans);
}

int main() {
  cin >> N >> M;
	rep(i,0,M) cin >> A[i];

  int ans = solve();

	// cout << fixed << setprecision(20);
  cout << ans << endl;
  return 0;
}
