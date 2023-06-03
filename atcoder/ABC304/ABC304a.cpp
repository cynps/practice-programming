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
	vector<pair<int,string>> SA(N*2);
	int minsa = INT_MAX;
	rep (i,0,N) {
		string s;
		int a;
		cin >> s >> a;
		if (a < minsa) minsa = a;
		SA[i] = make_pair(a, s);
		SA[i+N] = make_pair(a, s);
	}
	bool start = false;
	int cnt = 0;
	rep (i,0,N*2) {
		if (cnt == N) break;
		if (!start) {
			if (SA[i].first != minsa) {
				continue;
			} else {
				start = true;
				cout << SA[i].second << endl;
				cnt++;
			}
		} else {
			cout << SA[i].second << endl;
			cnt++;
		}
	} 
	return 0;
}
