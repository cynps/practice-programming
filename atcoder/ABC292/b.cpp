#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;

int N,Q;


ll modpow(ll a, ll n, int mod) {
  ll res = 1;
  while (n>0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

int solve() {
  int ans = 0;
  string ans_stack[Q];
  int ans_count = 0;
  int x[N] = {0};
  rep(i,0,Q) {
    int event, target;
    cin >> event >> target;
    --target;
    if (event == 1) ++x[target]; 
    if (event == 2) x[target] = x[target] + 2;
    if (event == 3) {
      if (x[target] >= 2) ans_stack[ans_count] = "Yes";
      else ans_stack[ans_count] = "No";
      ++ans_count;
    }
  }

  rep(i,0,ans_count) cout << ans_stack[i] << endl;

  return ans;
}

int main() {
  cin >> N >> Q;

  int ans = solve();
  // cout << ans << endl;
  return 0;
}
