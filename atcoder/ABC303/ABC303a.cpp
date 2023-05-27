#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

int N;
string S,T;

int main() {
	cin >> N >> S >> T;
	int ans = 1;

	rep(i,0,N) {
		if (S[i] == T[i]) {
			continue;
		} else {
			if ((S[i] == '1' && T[i] == 'l') || (T[i] == '1' && S[i] == 'l')) {
				continue; 
			} else if ((S[i] == '0' && T[i] == 'o') || (T[i] == '0' && S[i] == 'o')) {
				continue;
			}
		}
		ans = 0;
	}

	if (ans == 1) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
