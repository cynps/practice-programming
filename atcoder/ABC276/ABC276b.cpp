#include <bits/stdc++.h>
using namespace std;

int main() {
	int N,M;cin>>N>>M;
	vector<set<int>> d(N);
	for (int i=0;i<M;++i) {
		int A,B;cin>>A>>B;
		d[A-1].insert(B);
		d[B-1].insert(A);
	}
	for (int i=0;i<N;++i) {
		cout << d[i].size() << " ";
		for (auto a : d[i]) cout << a << " ";
		cout << endl;
	}
	return 0;
}