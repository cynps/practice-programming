#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for (int i=a; i<(b); ++i)
typedef long long ll;

ll L,N1,N2;

int main() {
  cin>>L>>N1>>N2;
	vector<pair<int,pair<ll,ll>>> N1nums, N2nums;

	ll v,l;

	cin>>v>>l;
	N1nums.push_back(make_pair(v,make_pair(0,l-1)));
	rep(i,1,N1){
		cin>>v>>l;
		ll pos=N1nums[i-1].second.second+1;
		ll nextPos=pos+l-1;
		N1nums.push_back(make_pair(v,make_pair(pos,nextPos)));
	}

	cin>>v>>l;
	N2nums.push_back(make_pair(v,make_pair(0,l-1)));
	rep(i,1,N2){
		cin>>v>>l;
		ll pos=N2nums[i-1].second.second+1;
		ll nextPos=pos+l-1;
		N2nums.push_back(make_pair(v,make_pair(pos,nextPos)));
	}

	// rep(i,0,N1nums.size())cout<<N1nums[i].first<<":"<<N1nums[i].second.first<<","<<N1nums[i].second.second<<" \n"[i+1==N1nums.size()];
	// rep(i,0,N2nums.size())cout<<N2nums[i].first<<":"<<N2nums[i].second.first<<","<<N2nums[i].second.second<<" \n"[i+1==N2nums.size()];

	ll ans=0;
	ll N1it=0,N2it=0,nextPos=0;
	do{
		// cout<<N1it<<","<<N2it<<endl;
		ll start=nextPos;
		nextPos=min(N1nums[N1it].second.second, N2nums[N2it].second.second);

		if(N1nums[N1it].first==N2nums[N2it].first)ans+=nextPos-start+1;

		if(N1nums[N1it].second.second==N2nums[N2it].second.second){N1it++;N2it++;}
		else if(N1nums[N1it].second.second<N2nums[N2it].second.second)N1it++;
		else N2it++;

		nextPos++;
	}while(nextPos<L);

  cout << ans << endl;

  return 0;
}
