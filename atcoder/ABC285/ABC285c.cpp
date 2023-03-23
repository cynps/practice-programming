#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(ll i=a; b<i; --i)
#define bitrep(bit,n) for(int bit=0; bit<(1<<n); ++bit)
#define bitfind(bit,i,n) for(int i=0; i<(n); ++i) if(bit & (1<<i))
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;}

int N;
string S;

int main() {
  cin >> S;
	ll ans = 0;
	N = S.length();
	ll count = 1;
	rrep(i, N-1, -1) {
		ans += alpint(S[i]) * count;
		// cout << alpint(S[i]) << endl;
		count *= 26;
	}

	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
  cout << ans << endl;

  return 0;
}
