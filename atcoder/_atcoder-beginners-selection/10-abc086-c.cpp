#include <bits/stdc++.h>

// using
using namespace std;

// define
// #define soa(array) (sizeof(array)/sizeof(array[0]))

// input 
int n;
int x[100010],y[100010],t[100010];

// default
int s_t = 0;
int s_x = 0;
int s_y = 0;

bool solve(int t, int x, int y) {
  int dist = abs(x - s_x) + abs(y - s_y);
  int time = abs(t - s_t);
  if (time < dist) return false;

  int tmp = (dist - time) % 2;
  if (dist == time || tmp == 0) {
    s_t = t;
    s_x = x;
    s_y = y;
    return true;  
  }
  
  return false;
}

int main() {
  cin >> n;
  for (int i=0; i<n; ++i) cin >> t[i] >> x[i] >> y[i];

  for (int i=0; i<n; ++i) {
    bool ans = solve(t[i], x[i], y[i]);

    if (ans == false) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}
