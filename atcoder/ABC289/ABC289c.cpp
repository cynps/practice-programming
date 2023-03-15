#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
#define bitrep(bit,n) for(int bit=0; bit<(1<<n); ++bit)
#define bitfind(bit,i,n) for(int i=0; i<(n); ++i) if(bit & (1<<i))
using namespace std;
typedef long long ll;
typedef long double ld;
const ld PI = 3.141592653589793;

int N,M;

int main() {
  cin >> N >> M;
	vector<int> C(M);
	vector<vector<int>> a(M);
	rep(i,0,M) {
		cin >> C[i];
		a[i].resize(C[i]);
		rep(j,0,C[i]) cin >> a[i][j];
	}

	// int M = 3;
	int ans = 0;
	bitrep(bit, M) {
		set<int> s;
		bitfind(bit,i,M) {
			rep(j,0,C[i]) s.insert(a[i][j]);
		}

		if (s.size() == N) ans++;

		// vector<int> s;
		// cout << bit << ": {";
		// int ss = (int)s.size();
		// rep(i,0,ss) cout << s[i] << ",}"[i+1==ss];
		// if (!ss) cout << "}";
		// cout << endl;
	}



  // int ans = 0;
	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
  cout << ans << endl;

  return 0;
}
