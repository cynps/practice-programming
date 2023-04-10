#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull; // ull 0 - 1 = 18446 74407 37095 51615 ≒ 1.8 * 10^19
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;} // A = 1
inline char intalp(int i) {return (char)i+64;} // 1 = A

#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)

#define bitrep(bit,n) for(int bit=0; bit<(1<<n); ++bit)
#define bitfind(bit,i,n) for(int i=0; i<(n); ++i) if(bit & (1<<i))
#define bitrange(i,n,range) for(int i=0, range=1; i<(n); ++i) range *= 2
inline int bitcount(int n) {return bitset<32>(n).count();}

int solve() {
	int ans = 0;
	return ans;
}

string S, T;

int main() {
	cin >> S >> T;

	rp (i,S.length()) {
		if (S[i] != T[i]) {
			cout << i + 1 << endl;
			return 0;
		}
	}

	cout << T.length() << endl;

	return 0;
}
