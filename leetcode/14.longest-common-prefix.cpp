#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string>& strs) {
    string ans = "";
    int minlen = INT_MAX;
    for (int i=0;i<strs.size();++i) {
      if (minlen > strs[i].length()) minlen = strs[i].length();
    }
    for (int i=0;i<minlen;++i) {
      char tmp = strs[0][i];
      bool same = true;
      for(int j=1;j<strs.size();++j) {
        if (strs[j][i] != tmp) same = false;
      }
      if (same) ans += tmp;
      else break;
    }

    return ans;
  }
};

int main() {
  vector<string> strs = {"flower","flow","flight"};
  Solution sol;
  cout << sol.longestCommonPrefix(strs) << endl;
  strs = {"flower","","flight"};
  cout << sol.longestCommonPrefix(strs) << endl;

}