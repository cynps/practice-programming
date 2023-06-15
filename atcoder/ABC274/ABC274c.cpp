#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

int main() 
{
	int N;
	cin>>N;
	vector<int>A(2*N+1,0);
	rep(i,1,N+1)
	{
		int a;
		cin>>a;
		A[i*2-1]=A[a-1]+1;
		A[i*2]=A[a-1]+1;
	}
	rep(i,0,2*N+1)cout<<A[i]<<endl;

	return 0;
}
