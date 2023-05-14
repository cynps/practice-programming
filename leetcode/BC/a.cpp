#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSeniors(vector<string>& details) {
      int ans = 0;
      for (string detail : details) {
        // cout << detail << endl;
        string age = detail.substr(11, 2);
        if (age > "60") ans++;
      }
      return ans;
    }
};

int main() {
  vector<string> s;
  s.push_back("7868190130M7522");
  s.push_back("5303914400F9211");
  s.push_back("9273338290F4010");
  Solution sol;
  int ans = sol.countSeniors(s);
  cout << ans << endl;
}

