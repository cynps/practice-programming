#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)
const int d[5]={0,1,0,-1};

int N;
int H,W;

int main() {
	cin>>H>>W;
	string S[H];
	rep(i,0,H)cin>>S[i];
	rep(i,0,H)rep(j,0,W)if(S[i][j]=='.') 
	{
		int cnt=0;
		// cout<<i<<','<<j<<':';
		rep(r,0,4) 
		{
			int x=i+d[r],y=j+d[r+1];
			// cout<<'('<<x<<','<<y<<')'<<",\n"[r+1==4];
			if(x<0||y<0||x>=H||y>=W)continue;
			if(S[x][y]=='#')cnt++;
		}
		if (cnt>=2) 
		{
			cout<<i+1<<" "<<j+1<<endl;
			return 0;
		}
	}

	return 0;
}
