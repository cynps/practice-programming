#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  string convert(string s, int numRows) {
    if (numRows==1) return s;
    string ans = "";
    int i = 0, j = 0;
    bool v = true;
    vector<queue<char>> zig;
    zig.resize(numRows);
    while (j < s.length()) {
      zig[i].push(s[j]);
      if (v) i++;
      else i--; 
      j++;
      if (i+1==numRows || i==0) v = !v;
    }
    for (int k=0;k<numRows;++k) {
      while (!zig[k].empty()) {
        char tmp = zig[k].front();
        ans += tmp;
        zig[k].pop();
      }
    }
    return ans;
  }
};

int main() {
  string s = "babad";
  int n; cin >> s >> n;
  Solution sol;
  string ans = sol.convert(s,n);
  cout << ans << endl;
}