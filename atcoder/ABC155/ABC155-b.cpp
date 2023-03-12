#include <bits/stdc++.h>

// using
using namespace std;
using ll = long long;

// input 
int n;

int solve() {
  return 0;
}

int main() {
  cin >> n;
  int a[n];
  for (int i=0; i<n; ++i) cin >> a[i];

  bool t = true;
  int i = 0;
  string ans = "APPROVED";
  while (t) {
    if (i == n) break;
    int tmp = a[i];
    if (tmp % 2 == 1) {
      ++i;
      continue;
    }
    if (tmp % 3 != 0 && tmp % 5 != 0) {
      t = false;
      ans = "DENIED";
    }
    ++i;
  }

  cout << ans << endl;

  return 0;
}
