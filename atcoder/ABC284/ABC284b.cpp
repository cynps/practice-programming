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
inline int alpint(char c) {return (int)c-64;}

int T;

int solve() {
	int N;
	cin >> N;
	int A[N];
	rp(i,N) cin >> A[i];
	int count = 0;
	rp(i,N) if(A[i]%2==1) count++;

	return count;
}

int main() {
  cin >> T;

	int answers[T];
	rp(i,T) answers[i] = solve();
	rp(i,T) cout << answers[i] << endl;
  
	// cout << alpint('A') << " " << alpint('Z') << endl; // 1 26

	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
  
  return 0;
}
