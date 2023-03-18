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

int N;
string S;

int main() {
  cin >> N >> S;
	bool na = false;

	rp(i, S.length()) {
		char s = S[i];

		if (na) {
			if (s == 'a') {
				na = false;
				cout << "nya";
			} else if (s == 'n') {
				cout << "n";
			} else {
				na = false;
				cout << "n" << s;
			} 

		} else {
			if (s == 'n') {
				na = true;
			} else {
				cout << s;
			}
		}

		if (i+1 == N && na) cout << s;
	}

	cout << endl;

  return 0;
}
