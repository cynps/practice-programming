#include <bits/stdc++.h>
using namespace std;

#define rp(i,n) for (int i=0; i<(n); ++i)

int N;
string S;

int main() {
	cin >> N >> S;
	int cT = 0;
	rp(i,N) if (S[i] == 'T') cT++;

	int cA = S.size() - cT;
	if (cA == cT) {
		if (S[S.size()-1] == 'A') cout << 'T' << endl;
		else cout << 'A' << endl;
		
	} else {
		if (cT > cA) cout << 'T' << endl;
		else cout << 'A' << endl;

	}


	return 0;
}
