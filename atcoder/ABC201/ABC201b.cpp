#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; ++i)

int N;

int main() {
	cin >> N;
	vector<pair<int,string>> ST(N);
	rep(i,0,N)cin>>ST[i].second>>ST[i].first;
	sort(ST.begin(),ST.end());
	cout<<ST[N-2].second<<endl;

	return 0;
}
