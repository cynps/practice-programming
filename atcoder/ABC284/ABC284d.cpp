#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull; // ull 0 - 1 = 18446 74407 37095 51615 ≒ 1.8 * 10^19
typedef long double ld;

#define rp(i,n) for (int i=0; i<(n); ++i)
#define rpull(i,n) for (ull i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)

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

int T;
ull N[20];
ull ans[20];
// set<ull> primes;

// ull findPrime(ull p) {
// 	decltype(primes)::iterator it = primes.find(p);
// 	if (it != primes.end()) return p;
// 	else return 0;
// }

ull is_prime(ull N) {
	if (N == 0) return 0;
	if (N == 1) return 0;
	if (N % 2 == 0) return 2;
	for (ull i = 3; i * i * i <= N; i += 2) {
		if (N % i == 0) return i;
	}
	return 0;
}

int main() {
	cin >> T;

	rp(i,T) {
		cin >> N[i];
		// N[i] = (ull)998244353 * (ull)998244353 * (ull)2;
		ans[i] = is_prime(N[i]);
	}

	rp(i,T) { 
		ull n = N[i];
		ull a = ans[i];
		ull p, q;
		if ((n / a) % a == 0) {
			p = a;
			q = n / a / a;
		} else {
			p = (ll) round(sqrt(n / a));
			q = a;
		}

		cout << p << " " << q << endl;
	}

	// cout << (ull)998244353 * (ull)998244353 * (ull)2 << endl;

	return 0;
}
