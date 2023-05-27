#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

int N,M,H,K;
string S;

int main() {
	cin >> N >> M >> H >> K;
	cin >> S;
	
	// int xy[M][M];
	map<pair<int,int>,bool> xy;
	// rep (i,0,M) rep (j,0,M) xy[i][j] == 0;
	rep (i,0,M) {
		int x,y;
		cin >> x >> y;
		// xy[x][y]++;
		xy.insert({{x,y},true});
	}

	// cout << "===" << endl;

	pair<int,int> pos = {0,0};
	rep(i,0,N) {

		if (H == 0) {
			cout << "No" << endl;
			return 0;
		}
		// cout << H << ": " << pos.first << " " << pos.second << " -> ";

		// if (S[i] == 'R') pos = {pos.first+1, pos.second};
		// if (S[i] == 'L') pos = {pos.first-1, pos.second};
		// if (S[i] == 'U') pos = {pos.first, pos.second+1};
		// if (S[i] == 'D') pos = {pos.first, pos.second-1};
		H--;

		if (S[i] == 'R') pos.first++;
		if (S[i] == 'L') pos.first--;
		if (S[i] == 'U') pos.second++;
		if (S[i] == 'D') pos.second--;

		// cout << pos.first << " " << pos.second << endl;


		if (H >= K) continue;

		// if (xy[pos.first][pos.second] == 1 && H < K) H = K;
		if (xy.find(pos) != xy.end()) {
			if (xy.at(pos)) {
				H = K;
				xy.at(pos) = false;
			}
		}
	}

	if (H < 0) cout << "No" << endl;
	else cout<< "Yes" << endl;	
	return 0;
}
