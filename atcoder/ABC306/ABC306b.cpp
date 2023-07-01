#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

int main() 
{
	vector<int> A(64);
	rep(i,0,64)cin>>A[i];
	unsigned long long ans=0;
	if(A[0]==1)ans+=1;
	unsigned long long now=1;
	for(int i=1;i<64;++i)
	{
		now*=2;
		if(A[i]==1)ans+=now;
	}
	cout<<ans<<endl;
	return 0;
}
