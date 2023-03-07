#include <bits/stdc++.h>

// using
using namespace std;
using ll = long long;

// input 
int n, k;

int solve() {
  int count = 0;
  bool j = true;
  while (j) {
    count++;
    n /= k;
    if (n == 0) j = false;
  }
  return count;
}

int main() {
  cin >> n >> k;
  int ans = solve();
  cout << ans << endl;
  return 0;
}
