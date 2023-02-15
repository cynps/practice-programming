#include <bits/stdc++.h>

// using
using namespace std;

// input 
int n,a,b;

int solve(int i) {
  int sum = 0;
  int calc = i;
  bool j = true;

  while (j) {
    sum += calc % 10;
    if (10 <= calc) calc /= 10;
    else j = false;
  }

  if (a <= sum && sum <= b) return i;
  else return 0;
}

int main() {
  cin >> n >> a >> b;
  
  int ans = 0;
  for (int i=1; i<=n; ++i) ans += solve(i);

  cout << ans << endl;

  return 0;
}
