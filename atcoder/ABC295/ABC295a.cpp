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

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int main() {
  cin >> N;
	string W[N];
	rp(i,N) cin >> W[i];

	string match[5] = {
		"and",
		"not",
		"that",
		"the",
		"you"
	};

	string ans = "No";
	rp(i,N) {
		rp(j,5) {
			if (W[i] == match[j]) {
				ans = "Yes";
				break;
			}
		}
		if (ans == "Yes") break;
	}

	// cout << alpint('A') << " " << alpint('Z') << endl; // 1 26

	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
  cout << ans << endl;

  return 0;
}
