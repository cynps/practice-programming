#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
      string ans = "";
      vector<int> digit;
      while (num > 0) {
        int tmp = num % 10;
        digit.push_back(tmp);
        num -= tmp;
        num /= 10;
      }
      int sz = digit.size();
      
      vector<vector<string>> r(4);
      r[0] = {"I","V","X","IV","IX"};
      r[1] = {"X","L","C","XL","XC"};
      r[2] = {"C","D","M","CD","CM"};
      r[3] = {"M","-","-","-","-"};

      // for (int i=digit.size()-1; i>=0; --i) cout << digit[i] << endl;

      for (int i=digit.size()-1; i>=0; --i) {
        if (digit[i] == 9) ans += r[i][4];  
        else if (digit[i] == 4) ans += r[i][3];
        else {
          if (digit[i] >= 5) {
            ans += r[i][1]; 
            digit[i] -= 5;
          }
          for (int j=0; j<digit[i]; ++j) ans += r[i][0];
        }
      }
      return ans;
    }
};

int main() {
  int s;
  cin >> s;
  Solution sol;
  string ans = sol.intToRoman(s);
  cout << ans << endl;
}