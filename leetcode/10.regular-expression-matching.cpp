#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  bool isMatch(string s, string p) {
    int n = s.length(), m = p.length();
    bool dp[n+1][m+1];
    for (int i=0;i<=n;++i) for (int j=0;j<=m;++j) dp[i][j] = false;
    dp[0][0] = true;
    for (int i=0;i<=n;++i) for (int j=1;j<=m;++j) {
      if (p[j-1] == '*') {
        if (dp[i][j-2]) dp[i][j] = true;
        else if (i > 0 && dp[i-1][j]) {
            if (s[i-1] == p[j-2] || p[j-2] == '.') dp[i][j] = true;
        }

      } else {
        if (i > 0 && dp[i-1][j-1] == true) {
          if (s[i-1] == p[j-1] || p[j-1] == '.') dp[i][j] = true;
        }
      }
    }
    return dp[n][m];
  }
};

int main() {
  string s, p;
  cin >> s >> p;
  Solution sol;
  bool ans = sol.isMatch(s,p);
  if (ans) cout << "ok" << endl;
  else cout << "ng" << endl;
}