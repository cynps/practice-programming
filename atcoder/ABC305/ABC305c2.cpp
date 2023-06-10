#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)

int N;
int H,W;

int main() {
	cin >> H >> W;
	string S[H];
	rep(i,0,H) cin >> S[i];

	int u=-1,l=-1,d=-1,r=-1;
	// u
	rep(i,0,H) 
	{
		rep(j,0,W) 
		{
			if(S[i][j]=='#') u=i;
			if (u!=-1) break;
		}
		if (u!=-1) break;
	}
	// d
	rrep(i,H-1,0) 
	{
		rep(j,0,W) 
		{
			if(S[i][j]=='#') d=i;
			if (d!=-1) break;
		}
		if (d!=-1) break;
	}
	// l
	rep(j,0,W) 
	{
		rep(i,0,H) 
		{
			if(S[i][j]=='#') l=j;
			if(l!=-1) break;
		}
		if(l!=-1) break;
	}
	// r
	rrep(j,W-1,0) 
	{
		rep(i,0,H) 
		{
			if(S[i][j]=='#') r=j;
			if(r!=-1) break;
		}
		if(r!=-1) break;
	}

	// cout<<"u,d,l,r"<<endl;
	// cout<<u<<","<<d<<","<<l<<","<<r<<endl;

	rep(i,u,d+1) rep(j,l,r+1) 
	{
		if (S[i][j]=='.') 
		{
			cout << i + 1 << " " << j + 1 << endl;
			return 0;
		}
	}

	return 0;
}
