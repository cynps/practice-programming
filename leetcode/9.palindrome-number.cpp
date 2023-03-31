#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a; i<b; ++i)

class Solution {
public:
  bool isPalindrome(int x) {
    bool ok = true;
    string str_x = to_string(x);
    int len = str_x.length();
    rep(i,0,len/2) {
      // cout << str_x[i] << " " << str_x[len-i-1] << endl;
      if (str_x[i] != str_x[len-i-1]) {
        ok = false;
        break;
      }
    }

    return ok;
  }
};

int main() {
  int x; cin >> x;
  Solution sol;
  bool ans = sol.isPalindrome(x);
  if (ans) cout << "Yes" << endl;
  else cout << "No" << endl;
  // cout << ans << endl;
}
