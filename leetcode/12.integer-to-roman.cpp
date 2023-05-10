#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
      string ans = "";
      int digit[4], cnt=0;
      for (int i=0; num > 0; ++i) {
        digit[i] = num % 10;
        num /= 10;
        cnt++;
      }
      
      string r[4][4] = {
        {"I","V","IV","IX"},
        {"X","L","XL","XC"},
        {"C","D","CD","CM"},
        {"M","-","-","-"}
      };

      // for (int i=digit.size()-1; i>=0; --i) cout << digit[i] << endl;

      for (int i = --cnt; i>=0; --i) {
        if (digit[i] == 9) ans += r[i][3];  
        else if (digit[i] == 4) ans += r[i][2];
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