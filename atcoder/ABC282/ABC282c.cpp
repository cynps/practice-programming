#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
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

#define bitrep(bit,n) for(int bit=0; bit<(1<<n); ++bit)
#define bitfind(bit,i,n) for(int i=0; i<(n); ++i) if(bit & (1<<i))
#define bitrange(i,n,range) for(int i=0, range=1; i<(n); ++i) range *= 2
inline int bitcount(int n) {return bitset<32>(n).count();}

int N;

int main() {
	cin >> N;
	string S;
	cin >> S;

	bool on = false;
	rep(i,0,S.length()) {
		if (S[i] == '"') {
			on = !on;
			cout << S[i];
		} else {
			if (!on && S[i] == ',') cout << '.';
			else cout << S[i];;
		}
	}


	// cout << alpint('A') << " " << alpint('Z') << endl; // 1 26
	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
	cout << endl;

	return 0;
}
