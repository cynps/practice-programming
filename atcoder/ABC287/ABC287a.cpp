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

int N;

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int main() {
  cin >> N;
	string s[N];
	int count = 0;
	int age = 0;
	rp(i,N) {
		cin >> s[i];
		if (s[i] == "For") count++;
		else age++;
	}

	if (count > age) cout << "Yes" << endl;
	else cout << "No" << endl;
	// cout << fixed << setprecision(20);
  // cout << ans << endl;

  return 0;
}
