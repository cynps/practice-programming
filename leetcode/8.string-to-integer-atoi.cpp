#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int myAtoi(string s) {
    long long ans = 0;
    bool is_front = true;
    bool is_minus = false;
    bool fix_posneg = false;
    bool digit_readin = false;
    int min_int = 1<<31;
    int max_int = (long long)min_int * -1 - 1;

    for (int i=0;i<s.length();++i) {
      if (is_front && s[i] == ' ') {
        continue;

      } else {
        is_front = false;
        if (!isdigit(s[i]) && s[i] != '-' && s[i] != '+') break;

        if (!digit_readin && !fix_posneg && (s[i] == '-' || s[i] == '+')) {
          fix_posneg = true;
          if (s[i] == '-') is_minus = true;
          continue;

        } else if (!digit_readin && fix_posneg && !isdigit(s[i])) {
          break;

        } else if (digit_readin && !isdigit(s[i])) {
          break;

        } else {
          digit_readin = true;
          ans *= 10;
          ans += s[i] - '0';

          if (is_minus) {
            if (ans * -1 < min_int) {
              ans = min_int;
              break;
            }
          } else if (ans > max_int) {
            ans = max_int;
            break;
          }
        }
      }
    }

    if (is_minus) ans *= -1;

    return (int)ans;
  }
};

int main() {
  Solution sol;
  cout << sol.myAtoi("42") << endl;
  cout << sol.myAtoi("   -42") << endl;
  cout << sol.myAtoi("4193 with words") << endl;
  cout << sol.myAtoi("words and 987") << endl;
  cout << sol.myAtoi("+-12") << endl;
  cout << sol.myAtoi("--11") << endl;
  cout << sol.myAtoi("+133+1") << endl;
  cout << sol.myAtoi("200000000000000000000") << endl;

  // string s;
  // cin >> s;
  // int ans = sol.myAtoi(s);
  // cout << ans << endl;
}