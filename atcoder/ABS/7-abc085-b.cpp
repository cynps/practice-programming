#include <bits/stdc++.h>

// using
using namespace std;

// define
// #define soa(array) (sizeof(array)/sizeof(array[0]))

// input 
int n;
int d[100];

int main() {
  cin >> n;
  for (int i=0; i<n; ++i) cin >> d[i];
  
  if (n == 1) {
    cout << n << endl;
    return 0;
  }

  sort(d, d + n);

  int ans = 1;
  for (int i=1; i<n; ++i) {
    if (d[i] != d[i-1]) ++ans;
  }

  cout << ans << endl;

  return 0;
}
