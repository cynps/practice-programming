#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;}

int N;
int A[301010];

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int solve() {
	int q, k, ans = -1; cin >> q >> k;
	k--;

	if (q == 1) {
		int x; cin >> x;
		A[k] = x;

	} else {
		ans = A[k];
	}

	return ans;
}

int main() {
  cin >> N;
	rp(i,N) cin >> A[i];

	int Q; cin >> Q;

  vector<int> ans;
	rp(i,Q) {
		int tmp = solve();
		if (tmp != -1) ans.push_back(tmp);
	}

	rp(i,ans.size()) cout << ans[i] << endl;

  return 0;
}
