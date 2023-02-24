#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod97 = 1000000007; // 10^9+7

// input 
int N, A[200020];

int solve() {
  map<int, ll> p;
  // rep(i,1,N) p[i] = 0;
  rep(i,0,N) p[A[i]]++;

  ll ans = 0;
  rep(i,1,N+1) if (p[i] > 1) ans += p[i] * (p[i] - 1) / 2;

  rep(i,0,N) {
    ll ans_tmp = ans;
    int tmp = p[A[i]];
    ans_tmp -= tmp * (tmp - 1) / 2;
    --tmp;
    if (tmp > 1) ans_tmp += tmp * (tmp - 1) / 2;
    // cout << "i: " << i << endl;
    cout << ans_tmp << endl;
  }
  return 0;
}

int main() {
  cin >> N;
  rep(i,0,N) cin >> A[i];
  solve();
  return 0;
}
