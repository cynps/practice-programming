#include <bits/stdc++.h>

// using
using namespace std;
using ll = long long;

// input 
ll h;

int main() {
  cin >> h;
  if (h == 1) {
    cout << 1 << endl;
    return 0;
  }

  int count = 0;
  ll tmp = h;
  bool j = true;
  while (j) {
    count++;
    tmp /= 2;
    // cout << "tmp: " << tmp << endl;
    if (tmp <= 1) j = false;
  }
  count++;
  // cout << count << endl;
  ll sq = pow(2, count) - 1;
  // cout << "2 square:" << sq << endl;
  cout << sq << endl;
  return 0;
}

// 10
// 5 5
// 2 2 5
// 1 1 2 5
// 1 2 5
// 2 5
// 1 1 5
// 

// 20 
// 10 10
// 5 5 5 5
// 2 2 2 2 2 2 2 2
// 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1