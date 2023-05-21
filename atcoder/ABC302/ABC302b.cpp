#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; ++i)

int H,W;
string S[100];
string snuke = "snuke";

bool solve(int i, int j, pair<int,int> move, int idx) { 
	if (idx == 5) return true;
	else if (i + move.first >= 0 && i + move.first < H && j + move.second >= 0 && j + move.second < W) {
		if (S[i+move.first][j+move.second] == snuke[idx]) {
			return solve(i+move.first, j+move.second, move, idx+1);
		} else {
			return false;
		}
	} 
	return false;
}

int main() {
	cin >> H >> W;
	rep (i,0,H) cin >> S[i];

	vector<pair<int,int>> ans;
	rep (i,0,H) rep(j,0,W) {
		if (S[i][j] == 's') {
			ans.push_back(make_pair(i,j));
			if (solve(i,j,make_pair(-1,-1),1)) {
				for (int k=0;k<5;++k) cout << i-- + 1 << " " << j-- + 1 << endl;
				return 0;
			}
			if (solve(i,j,make_pair(-1,0),1)) {
				for (int k=0;k<5;++k) cout << i-- + 1 << " " << j + 1 << endl;
				return 0;
			}
			if (solve(i,j,make_pair(-1,+1),1)) {
				for (int k=0;k<5;++k) cout << i-- + 1 << " " << j++ + 1<< endl;
				return 0;
			}
			if (solve(i,j,make_pair(0,-1),1)) {
				for (int k=0;k<5;++k) cout << i + 1 << " " << j-- + 1<< endl;
				return 0;
			}
			if (solve(i,j,make_pair(0,1),1)) {
				for (int k=0;k<5;++k) cout << i + 1 << " " << j++ + 1 << endl;
				return 0;
			}
			if (solve(i,j,make_pair(+1,-1),1)) {
				for (int k=0;k<5;++k) cout << i++ + 1 << " " << j-- + 1 << endl;
				return 0;
			}
			if (solve(i,j,make_pair(+1,0),1)) {
				for (int k=0;k<5;++k) cout << i++ + 1 << " " << j + 1<< endl;
				return 0;
			}
			if (solve(i,j,make_pair(+1,+1),1)) {
				for (int k=0;k<5;++k) cout << i++ + 1 << " " << j++ + 1 << endl;
				return 0;
			}
		}
	}

	return 0;
}
