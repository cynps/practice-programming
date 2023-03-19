#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
#define bitrep(bit,n) for(int bit=0; bit<(1<<n); ++bit)
#define bitfind(bit,i,n) for(int i=0; i<(n); ++i) if(bit & (1<<i))
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}

int N,M;

int main() {
  cin >> N >> M;
	int A[N], B[M], a[N], b[M];
	rp(i,N) cin >> A[i];
	rp(i,M) cin >> B[i];
	int s[N+M];
	copy(A, A + N, s);
	copy(B, B + M, s + N);
	sort(s, s + N + M);

	int ni = 0, mi = 0;
	rp(i,N+M) {
		if (s[i] == A[ni]) {
			a[ni] = i+1;
			ni++;
		} else if (s[i] == B[mi]) {
			b[mi] = i+1;
			mi++;
		}
	}

	rp(i,N) cout << a[i] << " \n"[i+1==N];
	rp(i,M) cout << b[i] << " \n"[i+1==M];

  return 0;
}
