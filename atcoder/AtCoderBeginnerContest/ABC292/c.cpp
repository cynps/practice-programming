#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;

int N;

ll modpow(ll a, ll n, int mod) {
  ll res = 1;
  while (n>0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

template <typename T>
map<T, T> prime_factor(T n) {
    map<T, T> ret;
    for (T i = 2; i * i <= n; i++) {
        T tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret[i] = tmp;
    }
    if (n != 1) ret[n] = 1;
    return ret;
}

template <typename T>
T divisor_num(T N) {
    map<T, T> pf = prime_factor(N);
    T ret = 1;
    for (auto p : pf) {
        ret *= (p.second + 1);
    }
    return ret;
}

ll solve() {
  ll ans = 0;

  // x > 0, y > 0;
  // x + y = N
  // x = N - y
  // count(x) = N - 1
  rep(i,1,N) {
    ll tmp_i = divisor_num(i);
    ll tmp_ni = divisor_num(N-i);
    ans += tmp_i * tmp_ni;

    // cout << i << " " << tmp_i  << " " << tmp_ni << " " << ans << endl;
  }
  // ans *= 2;
  return ans;
}

int main() {
  cin >> N;

  ll ans = solve();
  cout << ans << endl;
  return 0;
}
