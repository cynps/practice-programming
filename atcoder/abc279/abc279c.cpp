#include <bits/stdc++.h>
using namespace std;

int H, W;

int main() {
	cin >> H >> W;
	string S[H], T[H];
	for (int i=0; i<H; ++i) cin >> S[i];
	for (int i=0; i<H; ++i) cin >> T[i];

	// if (H == 1) {
	// 	if (S[0] == T[0]) cout << "Yes" << endl;
	// 	else cout << "No" << endl;
	// 	return 0;
	// }

	vector<string> counterS(W, ""), counterT(W, "");
	for (int j=0; j<W; ++j) for (int i=0; i<H; ++i) counterS[j] += S[i][j];
	for (int j=0; j<W; ++j) for (int i=0; i<H; ++i) counterT[j] += T[i][j];
	sort(counterS.begin(), counterS.end());
	sort(counterT.begin(), counterT.end());

	for (int i=0; i<W; ++i) if (counterS[i] != counterT[i]) {
		cout << "No" << endl;
		return 0;
	}

	cout << "Yes" << endl;
	
	return 0;
}
