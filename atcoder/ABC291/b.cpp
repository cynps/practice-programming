#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod = 1e9+7;

int N, X[510];
int sum = 0;

double solve() {
  int ans = 0;
  sort(X, X + N*5);
  int count = 0;
  rep(i,N,N*4) sum += X[i];
  // cout << sum << endl;
  double ret = (double)sum / (3.0 * N);

  return ret;
}

int main() {
  cin >> N;
  rep(i,0,N*5) cin >> X[i];

  double ans = solve();
  cout << fixed << setprecision(10);
  cout << ans << endl;
  return 0;
}
