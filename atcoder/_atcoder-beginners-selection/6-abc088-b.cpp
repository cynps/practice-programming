#include <bits/stdc++.h>

// using
using namespace std;

// define
// #define soa(array) (sizeof(array)/sizeof(array[0]))

// input 
int n;
int a[100];

int main() {
  cin >> n;
  for (int i=0; i<n; ++i) cin >> a[i];
  
  if (n == 1) cout << n << endl;
  
  sort(a, a + n, greater<int>{});

  int ans = 0;
  for (int i=0; i<n; ++i) {
    if (i%2 == 0) ans += a[i];
    else ans -= a[i];
  }

  cout << ans << endl;

  return 0;
}
