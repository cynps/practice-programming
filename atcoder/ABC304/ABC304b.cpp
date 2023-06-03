#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
const ld PI = 3.141592653589793;

#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)

inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;} // A = 1
inline char intalp(int i) {return (char)i+64;} // 1 = A

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int N;

int main() {
	cin >> N;
	if (N <= 999) cout << N << endl;
	else if (N <= 9999) cout << N - N % 10 << endl;
	else if (N <= 99999) cout << N - N % 100 << endl;
	else if (N <= 999999) cout << N - N % 1000 << endl;
	else if (N <= 9999999) cout << N - N % 10000 << endl;
	else if (N <= 99999999) cout << N - N % 100000 << endl;
	else if (N <= 999999999) cout << N - N % 1000000 << endl;

	return 0;
}
