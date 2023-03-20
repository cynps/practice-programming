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
	int A[N][2];
	rp(i,N) {
		cin >> A[i][0];
		A[i][1] = 0;
	}
	rp(i,N) if (A[i][1] == 0) A[A[i][0]-1][1] = 1;

	int count = 0;
	rp(i,N) if (A[i][1] == 0) count++;

	cout << count << endl;
	rp(i,N) if (A[i][1] == 0) cout << i + 1 << " \n"[i+1==N];

  return 0;
}
