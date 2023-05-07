#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

class Solution {
public:
  string longestPalindrome(string s) {
    if (s.length() == 1) return s;
    if (s.length() == 2) {
      if (s[0]==s[1]) return s;
      else return s.substr(0,1);
    }

    string ans = s.substr(0,1);

    rep(i,0,s.length()) {

      // is Odd
      int l=i,r=i;
      string tmpans = s.substr(l,r-l+1);
      while (true) {
        if (l<=0 || r>=s.length()) {
          tmpans = s.substr(l,r-l+1);
          break;

        } else {
          l--;
          r++;
          if (s[l] != s[r]) {
            tmpans = s.substr(l+1,r-l-1);
            break;
          }
        }
      }
      if (ans.length() < tmpans.length()) ans = tmpans;

      // is Even
      if (i+1<s.length() && s[i] == s[i+1]) {
        l=i,r=i+1;
        tmpans = s.substr(l,r-l+1);
        while (true) {
          if (l<=0 || r>=s.length()) {
            tmpans = s.substr(l,r-l+1);
            break;

          } else {
            l--;
            r++;
            if (s[l] != s[r]) {
              tmpans = s.substr(l+1,r-l-1);
              break;
            }
          }
        }
        if (ans.length() < tmpans.length()) ans = tmpans;
      }
    }
    return ans;
  }
};

int main() {
  string s = "cbbd";
  cin >> s;
  Solution sol;
  string ans = sol.longestPalindrome(s);
  cout << ans << endl;
}

// abcdbbfcba