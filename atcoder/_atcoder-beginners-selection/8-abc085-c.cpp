#include <bits/stdc++.h>

// using
using namespace std;

// define
// #define soa(array) (sizeof(array)/sizeof(array[0]))

// input 
int n,y;

int main() {
  cin >> n >> y;
  for (int i=0; i<=n; ++i) for (int j=0; j<=n-i; ++j) {
    int k = n - i - j;
    int sum = 10000 * i + 5000 * j + 1000 * k;
    if (sum == y) {
      cout << i << " " << j << " " << k << endl;
      return 0;
    }
  }

  cout << "-1 -1 -1" << endl;

  return 0;
}
