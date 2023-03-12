#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod97 = 1000000007; // 10^9+7

// input 
int a, b;

int solve() {
  rep(i,0,11000) {
    int _a = i * 0.08;
    int _b = i * 0.1;
    if (_a == a && _b == b) return i;
  }
  return -1;
}

int main() {
  cin >> a >> b;
  int ans = solve();
  cout << ans << endl;
  return 0;
}
