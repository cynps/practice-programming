#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int ans = 0;
    if (s.size() == 0) return ans;
    set<char> strSet;
    strSet.insert(s[0]);
    int i = 0;
    // cout << i << " si:" <<  s[i] << " strit:" << *strSet.find(s[i]) << endl;
    for (int i=1, pos=0; i<s.size(); ++i) {
      // cout << i << " si:" <<  s[i] << " strit:" << *strSet.find(s[i]) << " ";

      if (s[i] == *strSet.find(s[i])) {
        // cout << " == erase == pos:" << pos << " ";
        if (ans < strSet.size()) ans = strSet.size();

        for (int j=pos; j<=i; ++j) {

          // cout << "j:" << j << " " << s[j] << " ";
          strSet.erase(s[j]);
          if (s[j] == s[i]) {
            pos = j+1;
            break;
          }
        }
      }

      strSet.insert(s[i]);

      // cout << " ";
      // cout << "si: " << s[i] << " / ";
      // for (auto k : strSet) {
      //   cout << k << " ";
      // }

      // cout << endl;
    }
    if (ans < strSet.size()) ans = strSet.size();
    return ans;
  }
};

int main() {
  string s = "pwwkew";
  Solution ans;
  int a = ans.lengthOfLongestSubstring(s);
  cout << a << endl;
  
}