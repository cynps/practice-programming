#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
// const ll mod97 = 1000000007; // 10^9+7

// input 
int n,m, s[6], c[6];

int solve() {
  int ans = -1;
  rep(i,0,1000) {
    bool q = true;
    string str = to_string(i);
    rep(j,0,m) {
      if (str[s[j]-1] != (c[j] + '0')) {
        q = false;
        // cout << "false, l:" << l << ", r:" << r << endl;
      }
      // cout << "i:" << i << " strsj: " << str[s[j]-1] << " sj:" << s[j] << " cj:" << c[j] << endl;
    }
    if (str.length() < n) q = false;
    if (q) {
      // cout << "i: " << i << endl;
      ans = i;
      break;
    }
  } 

  return ans;
}

int main() {
  cin >> n >> m;
  rep(i,0,m) cin >> s[i] >> c[i];

  int ans = solve();
  cout << ans << endl;
  return 0;
}
