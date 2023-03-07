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
  for (int i=0; i<n; ++i) cin>> a[i];
  sort(a, a + n);

  string ans = "YES";
  for (int i=1; i<n; ++i) {
    if (a[i] == a[i-1]) {
      ans = "NO";
      cout << ans << endl;
      return 0;
    }
  }

  cout << ans << endl;
  return 0;
}
