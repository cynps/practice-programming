#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod = 1e9+7;

string S;

int solve() {
  int ans = 0;
  rep(i,0,S.length()) {
    // cout << S[i] << endl;
    if ((int)S[i] < 91) return ++i;
  }
  return ans;
}

int main() {
  cin >> S;
  // cout << S.length() << endl;

  int ans = solve();
  cout << ans << endl;
  return 0;
}
