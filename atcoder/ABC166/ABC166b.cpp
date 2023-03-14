#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

int N, K;

int main() {
  cin >> N >> K;
	// int s[N];
	// rep(i,0,N) s[i] = 1;
	
	// cout << "s[i]:";
	// rep(i,0,N) cout << s[i] << " \n"[i+1==N];

	set<int> s;

	rep(i,0,K) {
		int d, A;
		cin >> d;
		rep(j,0,d) {
			cin >> A;
			// s[A-1] = 0;
			s.insert(A);
		}
	}

	int ans = N - s.size();
	// rep(i,0,N) ans += s[i];

  cout << ans << endl;
  return 0;
}
