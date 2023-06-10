#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull; // ull 0 - 1 = 18446 74407 37095 51615 ≒ 1.8 * 10^19

#define rep(i,a,b) for(int i=a; i<b; ++i)

int N;
int H,W;

int main() {
	cin >> H >> W;
	string S[H];
	rep(i,0,H) cin >> S[i];
	rep(i,0,H) rep(j,0,W) {
		if (S[i][j] == '#') {

			if (j > 0 && S[i+1][j-1] == '#') {
				// 左上たべた
				cout << i + 1 << " " << j << endl;
				return 0;

			} else {
				// それ以外
				int wsize = 0;

				// 最上段かどうか
				rep (k,0,W-j) {
					if (S[i][j+k] == '#') {
						wsize++;
						continue;
					} else if (S[i][j+k] == '.' && k < W-j-1 && S[i][j+k+1] == '#') {
						cout << i + 1 << " " << j + k + 1 << endl;
						return 0;
					} else if (S[i][j+k] == '.' && i < H-1 && S[i+1][j+k] == '#') {
							cout << i + 1 << " " << j + k + 1 << endl;
							return 0;
					} else {
						break;
					}
				}

				// 最左列かどうか
				int hsize = 0;
				rep (k,0,H-i) {
					if (S[i+k][j] == '#') {
						hsize++;
						continue;
					} else if (S[i+k][j] == '.' && k < H-i-1 && S[i+k+1][j] == '#') {
						cout << i + k + 1 << " " << j + 1 << endl;
						return 0;
					} else if (S[i+k][j] == '.' && j < W-1 && S[i+k][j+1] == '#') {
						cout << i + k + 1 << " " << j + 1 << endl;
						return 0;
					} else {
						break;
					}
				}

				// cout << "wh:" <<  wsize << " " << hsize << endl;

				// 最上段でも最左列でもない
				rep (hi,0,hsize) rep (wi,0,wsize) {
					if (S[i+hi][j+wi] == '.') {
						cout << i + hi + 1 << " " << j + wi + 1 << endl;
						return 0;
					}
				}
			}

			return 0;
		}
	}

	return 0;
}
