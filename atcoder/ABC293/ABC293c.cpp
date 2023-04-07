#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rp(i,n) for (int i=0; i<(n); ++i)
#define bitrep(bit,n) for(int bit=0; bit<(1<<n); ++bit)

int H, W;
int A[11][11];

int findNumbers(ll sum, ll w, ll hw) {
	bitset<18> bs(sum);
	if (bs.count() != w) return 0;
	else {
		// rp(i,hw) cout<<bs[i]<<" \n"[i+1==hw];
		int p = 0, q = 0;
		set<int> numbers;
		numbers.insert(A[p][q]);
		rp(i,hw) {
			if (bs[i]) q++;
			else p++;
			numbers.insert(A[p][q]);
		}
		// cout<<numbers.size()<<endl;
		if (numbers.size() == hw+1) return 1;
		else return 0;
	}
}

int main() {
	cin >> H >> W;
  rp(i,H) rp(j,W) cin >> A[i][j];

	int bit = 1;
	rp(i,H+W-2) bit *= 2;

	// cout << bit << endl;

	int ans = 0;
	rp(i,bit) ans += findNumbers(i, W-1, H+W-2);
  cout << ans << endl;

  return 0;
}
