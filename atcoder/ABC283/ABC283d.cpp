#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef unsigned long long ull; // ull 0 - 1 = 18446 74407 37095 51615 ≒ 1.8 * 10^19
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;} // A = 1

string S;

int main() {
	cin >> S;
	set<char> str;

	bool ok = true;
	stack<vector<char>> symstart;
	vector<char> first;
	symstart.push(first);

	rp(i, S.size()) {
		if (S[i] == '(') {
			vector<char> tmp;
			symstart.push(tmp);
			continue;

		} else if (S[i] == ')') {
			vector<char> tmp = symstart.top();
			rp(j, tmp.size()) str.erase(tmp[j]);
			symstart.pop();
			continue;

		} else {
			decltype(str)::iterator it = str.find(S[i]);
			if (it != str.end()) {
				ok = false;
				break;
			}
			str.insert(S[i]);
			symstart.top().push_back(S[i]);

		}
	}

	// cout << alpint('A') << " " << alpint('Z') << endl; // 1 26
	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
	// cout << fixed << setprecision(20);
	// cout << ans << endl;

	return 0;
}
