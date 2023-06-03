#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,a,b) for(int i=a; i<b; ++i)

int N,D;

int solve() {
	int ans = 0;
	return ans;
}

int main() {
	cin >> N >> D;

	vector<pair<pair<int,int>,int>> XY(N);
	pair<int,int> xy[N];
	rep (i,0,N) cin >> xy[i].first >> xy[i].second;
	vector<bool> chk(N, false);
	chk[0] = true;
	queue<int> target;
	target.push(0);
	while (!target.empty()) {
		int p = target.front();
			int x1,y1,x2,y2;
			x1 = xy[p].first;
			y1 = xy[p].second;
		target.pop();
		rep (i,0,N) {
			if (i == p) continue;
			x2 = xy[i].first;
			y2 = xy[i].second;
			if (sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) <= D) {
				if (chk[i] == false) {
					chk[i] = true;
					target.push(i);
				}
			}
		}
	}

	rep (i,0,N) {
		if (chk[i]) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}
