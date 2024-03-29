#include <bits/stdc++.h>
#define rp(i,n) for (int i=1; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}

int N;
string S;

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int main() {
  cin >> N >> S;

	rp(i,S.length()) {
		int count = 0;
		for (int j=0; i+j < S.length(); ++j) {
			if (S[j] != S[j+i]) count++;
			else break;
		}
		cout << count << endl;
	}

	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);

  return 0;
}
