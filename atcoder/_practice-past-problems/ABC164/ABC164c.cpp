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
string S[201010];

int solve() {
  int ans = 0;
	set<string> s;
	rep(i,0,N) {
		decltype(s)::iterator it = s.find(S[i]);
		if (it == s.end()) {
			ans++;
			s.insert(S[i]);
		} 
	}
  return ans;
}

int main() {
  cin >> N;
	rep(i,0,N) cin >> S[i];

  int ans = solve();

	// cout << fixed << setprecision(20);
  cout << ans << endl;
  return 0;
}
