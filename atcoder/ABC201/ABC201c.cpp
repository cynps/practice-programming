#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

int main() 
{
	string S;
	cin >> S;
	int ans=0;
	rep(i,0,10000)
	{
		int tmp_i=i;
		string target="";
		rep(j,0,4)
		{
			target+=(tmp_i%10)+'0';
			tmp_i/=10;
		}

		string tmp_s=S;

		bool ng=false;
		rep(j,0,4)
		{
			if(tmp_s[target[j]-'0']=='x')ng=true;
			else tmp_s[target[j]-'0']='?';
		}
		if(ng)continue;

		bool ok=true;
		rep(k,0,10)if(tmp_s[k]=='o')ok=false;
		if(ok)ans++;
		// if(ok)cout<<target<<endl;
	}
	cout<<ans<<endl;
	return 0;
}
