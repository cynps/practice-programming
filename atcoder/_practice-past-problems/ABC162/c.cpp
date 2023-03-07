#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
using namespace std;

int K;

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int solve() {
  int ans = 0;
  rep(i,1,K+1) rep(j,1,K+1) rep(k,1,K+1) {
	ans += gcd(gcd(i, j),k);
  }
  return ans;
}

int main() {
  cin >> K;

  int ans = solve();
  cout << ans << endl;
  return 0;
}
