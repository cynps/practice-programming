#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ld PI = 3.141592653589793;

int N;

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int main() {
  cin >> N;

  int ans = N;

	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
  cout << ans << endl;

  return 0;
}
