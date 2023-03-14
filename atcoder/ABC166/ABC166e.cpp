#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

int N;
map<int,int> mp;

ll solve() {
  ll ans = 0;
	int A[N], L, R;

	rep(i,0,N) cin >> A[i];

	// i < j
	// j - i = A[i] + A[j]
	// i + A[i] = j - A[j]
	rep(j,0,N) {
		L = j + A[j]; // i + A[i]
		R = j - A[j];
		ans += mp[R];
		mp[L]++;
	}

  return ans;
}

int main() {
  cin >> N;

  ll ans = solve();

	// cout << fixed << setprecision(20);
  cout << ans << endl;
  return 0;
}
