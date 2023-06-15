#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

int N;

int main()
{
	cin>>N;
	map<int,int> A;
	int a;
	rep(i,0,N) cin>>a, A[a]++;
	for(auto it=A.rbegin();it!=A.rend();++it)cout<<it->second<<endl;
	rep(i,0,N-A.size())cout<<0<<endl;
	return 0;
}
