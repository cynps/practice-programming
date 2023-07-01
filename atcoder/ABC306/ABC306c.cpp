#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

int main() 
{
	int N;
	cin>>N;
	vector<int> A(N*3);
	rep(i,0,3*N)cin>>A[i];
	set<int> a;
	a.insert(A[0]);
	vector<int> res;
	rep(i,1,3*N)
	{
		if(a.find(A[i]) != a.end()) 
		{
			res.push_back(A[i]);
			a.erase(A[i]);
		}
		else 
		{
			a.insert(A[i]);
		}
	}
	rep(i,0,N)cout<<res[i]<<" \n"[i+1==N];
	return 0;
}
