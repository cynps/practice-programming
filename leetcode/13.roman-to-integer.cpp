#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int conv(char c) {
    if (c == 'I') return 1;
    else if (c == 'V') return 5;
    else if (c == 'X') return 10;
    else if (c == 'L') return 50;
    else if (c == 'C') return 100;
    else if (c == 'D') return 500;
    else return 1000; // (c == 'M')
  }
  int romanToInt(string s) {
    int ans = 0;
    int len = s.length();
    for (int i=0; i<len; ++i) {
      if (s[i] == 'I') {
        if (i+1 != len && s[i+1] == 'V' || s[i+1] == 'X') ans -= 1;
        else ++ans;

      } else if (s[i] == 'X') {
        if (i+1 != len && s[i+1] == 'L' || s[i+1] == 'C') ans -= 10;
        else ans += 10;

      } else if (s[i] == 'C') {
        if (i+1 != len && s[i+1] == 'D' || s[i+1] == 'M') ans -= 100;
        else ans += 100;

      } else {
        ans += conv(s[i]);

      }
    }

    return ans;
  }
};

int main() {
  string s = "MCMXCIV";
  Solution sol;
  int ans = sol.romanToInt(s);
  cout << ans << endl;
}