#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        bool minus = false;
        if (x == -2147483648) return 0; 
        if (x < 0) {
          minus = true;
          x *= -1;
        }

        long long ans = 0;
        do {
          int tmp = x % 10;
          x /= 10;
          ans *= 10;
          ans += tmp;
          // cout << tmp << " " << x << " " << ans << endl;
        } while (x != 0);

        if (minus) ans *= -1;

        int tmpans = (int)ans;
        if (tmpans != ans) ans = 0;

        return ans;
    }
};

int main() {
  int x; cin >> x;
  Solution sol;
  int ans = sol.reverse(x);
  cout << ans << endl;
}