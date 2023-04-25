#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
	cin >> N;
	string suit = "HDCS";
	string sec = "A23456789TJQK";

	string ans = "Yes";
	set<string> str;
	for (int i=0;i<N;++i) {
		string s; cin>>s;

		// 1
		bool ng = true;
		for (int j=0;j<4;++j) if (s[0]==suit[j]) ng = false;
		if (ng) ans = "No";

		// 2
		ng = true;
		for (int j=0;j<13;++j) if (s[1]==sec[j]) ng = false;
		if (ng) ans = "No";

		// 3
		str.insert(s);
	}
	if (str.size() != N) ans = "No";

	cout << ans << endl;

	return 0;
}
