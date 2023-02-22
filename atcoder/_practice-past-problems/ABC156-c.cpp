#include <bits/stdc++.h>

// using
using namespace std;
using ll = long long;

// input 
int n;
int x[110];

int solve() {
  // int min = 101;
  // int max = 0;
  // for (int i=0; i<n; ++i) {
  //   if (x[i] > max) max = x[i];
  //   if (x[i] < min) min = x[i];
  // }
  // int p = (min + max) / 2;

  double p = 0.0;
  for (int i=0; i<n; ++i) p += (double)x[i];
  p = round(p/n);

  int dist = 0;
  for (int i=0; i<n; ++i) {
    dist += (x[i] - p) * (x[i] - p);
  }
  return dist;
}

int main() {
  cin >> n;
  for (int i=0; i<n; ++i) cin >> x[i];
  int ans = solve();
  cout << ans << endl;
  return 0;
}
