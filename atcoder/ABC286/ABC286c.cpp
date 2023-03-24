#include <bits/stdc++.h>
#define rp(i,n) for (ll i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
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

int N,A,B;
string S;

int main() {
  cin >> N >> A >> B >> S;
  ll ans = 1e18;
	S += S;

	rp(i,N) {
		ll tmpCost = A * i;
		rep(j,0,N/2) if (S[j+i] != S[i+N-1-j]) tmpCost += B;
		ans = min(ans, tmpCost);
	} 

	// cin >> S;
	// bool k = isKaibun(S);
	// if (k) ans++;

	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
  cout << ans << endl;

  return 0;
}
