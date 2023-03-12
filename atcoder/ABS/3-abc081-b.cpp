#include <bits/stdc++.h>

// using
using namespace std;

// input 
int n;
int a[200];

int solve(int a) {
  int count = 0;
  bool even = true;
  while (even) {
    if (a % 2 == 0) {
      a = a / 2;
      ++count;
    } else {
      even = false;
    }
  }
  return count;
}

int main() {
  cin >> n;
  for (int i=0; i<n; ++i) cin >> a[i];

  int ans = solve(a[0]);
  if (n == 1) return ans;
  for (int i=1; i<n; ++i) ans = min(ans, solve(a[i]));

  cout << ans << endl;

  return 0;
}
