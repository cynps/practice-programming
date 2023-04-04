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

int N,X,Y,Z;

struct point {
	int A;
	int B;
	int AB;
	int id;
	bool chosen;
};

int main() {
  cin >> N >> X >> Y >> Z;
	vector<point> e(N);
	// vector<ll> A(N), B(N), AB(N);

	rp(i,N) { cin >> e[i].A; e[i].A *= 100000; e[i].A += 1000 - i; e[i].AB = e[i].A; e[i].id = i + 1; e[i].chosen = false; };
	rp(i,N) { cin >> e[i].B; e[i].B *= 100000; e[i].AB += e[i].B; e[i].B += 1000 - i; };
	// rp(i,N) { A[i] = 0; B[i] = 0; AB[i] = 0; };
	// rp(i,N) { cin >> A[i]; A[i] *= 100000; AB[i] += A[i]; A[i] += 1000 - i; AB[i] += 1000 - i; };
	// rp(i,N) { cin >> B[i]; B[i] *= 100000; AB[i] += B[i]; B[i] += 1000 - i; };

	set<int> ans;

	// A をキーに降順でソート
	sort(e.begin(), e.end(), 
		[](const point& x, const point& y) { return (x.A > y.A); });

	int count = 0;
	rp(i,N) if (e[i].chosen == false && count < X) {
		ans.insert(e[i].id);
		e[i].chosen = true;
		count++;
	}

	// sort(A.begin(), A.end(), greater<int>());
	// sort(B.begin(), B.end(), greater<int>());
	// sort(AB.begin(), AB.end(), greater<int>());

	// if (X != 0) {
	// 	rp(i,X) {
	// 		int tmp = (A[i] + 100) % 100000;
	// 		ans.insert(tmp);
	// 	}
	// }

	// cout << endl;
	// for (auto p : ans) cout << p << endl;

	count = 0;

	// B をキーに降順でソート
	sort(e.begin(), e.end(), 
		[](const point& x, const point& y) { return (x.B > y.B); });

	rp(i,N) if (e[i].chosen == false && count < Y) {
		ans.insert(e[i].id);
		e[i].chosen = true;
		count++;
	}

	// if (Y != 0) {
	// 	rp(i,N) {
	// 		int tmp = (B[i] + 100) % 100000;
	// 		if (*ans.find(tmp) == *ans.end()) {
	// 			ans.insert(tmp);
	// 			count++;
	// 		}
	// 		if (count == Y) break;
	// 	}
	// }

	// cout << endl;
	// for (auto p : ans) cout << p << endl;

	count = 0;

	// AB をキーに降順でソート
	sort(e.begin(), e.end(), 
		[](const point& x, const point& y) { return (x.AB > y.AB); });

	rp(i,N) if (e[i].chosen == false && count < Z) {
		ans.insert(e[i].id);
		e[i].chosen = true;
		count++;
	}

	// if (Z != 0) {
	// 	count = 0;
	// 	rp(i,N) {
	// 		int tmp = (AB[i] + 100) % 100000;
	// 		if (*ans.find(tmp) == *ans.end()) {
	// 			ans.insert(tmp);
	// 			count++;
	// 		}
	// 		if (count == Z) break;
	// 	}
	// }


	// cout << endl;
	for (auto p : ans) cout << p << endl;

  return 0;
}
