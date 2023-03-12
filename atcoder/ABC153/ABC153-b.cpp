#include <bits/stdc++.h>

// using
using namespace std;

// input 
int h,n;
int a;


int main() {
  cin >> h >> n;
  int ans = 0;
  for (int i=0;i<n;++i) {
    cin >> a;
    ans += a;
  }

  if (h > ans) cout << "No" << endl;
  else cout << "Yes" << endl;

  return 0;
}
