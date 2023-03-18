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

int N,P,Q,R,S;

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int main() {
  cin >> N >> P >> Q >> R >> S;
	int A[N];
	rp(i,N) cin >> A[i];
	P--;
	Q--;
	R--;
	S--;

	int len = Q - P + 1;

	rp(i,N) {
		if (i == P) {
			rp(j,len) cout << A[R+j] << " \n"[i+1==N];
			i += len;
		}
		if (i == R) {
			rp(j,len) cout << A[P+j] << " \n"[i+1==N];
			i += len;
		}
		if (i < N) cout << A[i] << " \n"[i+1==N];
	}

  return 0;
}
