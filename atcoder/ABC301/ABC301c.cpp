#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rp(i,n) for (int i=0; i<(n); ++i)
inline int alpint(char c) {return (int)c-64;} // A = 1

string S, T;

int main() {
	cin >> S >> T;
	int n = S.size();
	vector<int> v_s(27,0);
	vector<int> v_t(27,0);

	int at = 0;

	rp(i,n) {
		int idx = (int)S[i]-97;
		// cout << (int)S[i]-97 << " \n"[i+1==n];
		if (S[i] == '@') at++;
		else v_s[idx] += 1;
	}

	rp(i,n) {
		int idx = (int)T[i]-97;
		// cout << (int)T[i]-97 << " \n"[i+1==n];
		if (T[i] == '@') at++;
		else v_t[idx] += 1;
	}

	// rp (i,26) {
	// 	cout << v_s[i] << " " << v_t[i] << endl;
	// }

	// cout << "at: " << at << endl;

	int diff = 0;
	int ng = 0;
	rp(i,26) {
		diff += abs(v_s[i] - v_t[i]);
		if (v_s[i] != v_t[i]){
			if (i==0 || i==2 || i==3 || i==4 || i==14 || i==17 || i==19);
			else ng = 1;	
		}
	}

	if (diff <= at) {
		if (ng == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	else cout << "No" << endl;

	return 0;
}
