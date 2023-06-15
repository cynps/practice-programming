#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; ++i)

int main() {
	vector<int> A(3);
	cin >> A[0]>>A[1]>>A[2];
	sort(A.begin(), A.end());
	if (A[2]-A[1] == A[1]-A[0]) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	return 0;
}
