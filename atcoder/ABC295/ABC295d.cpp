#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;} // A = 1

#define bitrep(bit,n) for(int bit=0; bit<(1<<n); ++bit)
#define bitfind(bit,i,n) for(int i=0; i<(n); ++i) if(bit & (1<<i))
#define bitrange(i,n,range) for(int i=0, range=1; i<(n); ++i) range *= 2
inline int bitcount(int n) {return bitset<32>(n).count();}

int N;
string S;

// 00000 00000

int main() {
  cin >> S;

	// int len = S.length();
	// bitset<10> dp[len][len];

	// dp[0][0] = bs2;
	// cout << bs << " " << bs2 << endl;
	// cout << dp[0][0] << endl;

	// ll ans = 0;
	// for (int l = 0; l < len; ++l) {
	// 	for (int r = l + 1; r < len; r += 2) {
	// 		bitset<10> tmpl(1<<ctoi(S[l]));
	// 		bitset<10> tmpr(1<<ctoi(S[r]));
	// 		dp[l][r] = tmpl ^ tmpr;
	// 		if 
	// 	}
	// }

	// int tmp = ctoi(S[0]);
	// bitset<10> bs(1<<tmp);
	
	// 累積和
	int n = S.length();
	vector<int> x(n+1); // 0 文字目の時に全て 0 となるケースを追加するので、n 文字目は n+1 に格納される。
	rp(i,n) {
		int c = ctoi(S[i]);
		x[i+1] = x[i] ^ 1<<c; // 2 進数、排他的論理和で管理
	}
	map<int,int> m;
	rp(i,n+1) m[x[i]]++;

	ll ans = 0;
	for (auto p : m) {
		ll num = p.second;
		ans += num * (num - 1) / 2; // nC2 = n*(n-1)/2
	}

	cout << ans << endl;

  return 0;
}
