#include <bits/stdc++.h>

// using
using namespace std;
using ll = long long;

// input 
int n,k;

int main() {
  cin >> n >> k;
  int h[n];
  for (int i=0;i<n;++i) cin >> h[i];

  sort(h, h + n);

  ll ans = 0;
  for (int i=0;i<n-k;++i) ans += h[i];

  cout << ans << endl;

  return 0;
}
