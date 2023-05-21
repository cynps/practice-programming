#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

int main() {
	int N;
	cin >> N;
	map<int,int> A;
	rep(i,0,N) {
		int an; 
		cin >> an;
		A.insert(make_pair(an,i+1));
	}

	rep(i,0,N) cout << A.at(i+1) << " \n"[i+1==N];

	return 0;
}
