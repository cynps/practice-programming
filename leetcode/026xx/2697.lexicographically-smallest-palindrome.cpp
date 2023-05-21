#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int center;
        if (s.size() % 2 == 0) {
            center = s.size() / 2;
            for (int i=1; i<s.size()/2+1; ++i) {
                int l = center - i;
                int r = center + i - 1;
                cout << center << " " << l << " " << r << " " << s << endl;
                if (s[l] != s[r]) {
                  if (s[l] < s[r]) s[r] = s[l];
                  else s[l] = s[r];
                }
            }

        } else {
            center = s.size() / 2;
            for (int i=1; i<s.size()/2+1; ++i) {
                int l = center - i;
                int r = center + i;
                cout << center << " " << l << " " << r << " " << s << endl;
                if (s[l] != s[r]) {
                  if (s[l] < s[r]) s[r] = s[l];
                  else s[l] = s[r];
                }
            }

        }

        return s;
    }
};

int main() {
  string s = "gcegcfece";
  Solution sol;
  string ans = sol.makeSmallestPalindrome(s);
  cout << ans << endl;

  s = "abcd";
  ans = sol.makeSmallestPalindrome(s);
  cout << ans << endl;

  s = "seven";
  ans = sol.makeSmallestPalindrome(s);
  cout << ans << endl;

}

