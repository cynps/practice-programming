#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod97 = 1000000007; // 10^9+7

// input 
double l;
ld solve() {
  return (l / 3) * (l / 3) * (l / 3);
}

int main() {
  cin >> l;
  ld ans = solve();
  cout << fixed << setprecision(20) << ans << endl;
  return 0;
}
