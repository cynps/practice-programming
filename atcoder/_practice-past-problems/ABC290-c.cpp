#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const ll mod = 1e9+7;
const int mod = 998244353;

int N, K, A[301010];

ll modpow(ll a, ll n, ll mod) {
  ll res = 1;
  while (n>0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

void t1() {
  cout << "sorted" << endl;
  rep(i,0,N) cout << A[i] << " ";
  cout << endl;
}

int solve() {
  int ans = 0;
  if (N == 1) {
    if (A[0] == 0) return 1;
    else return 0;
  }
  sort(A, A + N);

  // test code
  // t1();

  for (int i=0; ans<K; ++i) {
    if (A[i] == ans) ++ans;
    else if (A[i] != (ans - 1)) return ans; 
  }
  return ans;
}

int main() {
  cin >> N >> K;
  rep(i,0,N) cin >> A[i];

  int ans = solve();
  cout << ans << endl;
  return 0;
}
