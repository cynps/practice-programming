#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minLength(string s) {
        int ans = 0;
        bool again = true;
        while (again) {
            bool check = true;
            cout << s << endl;
            for (int i=0;i<s.size()-1;++i) {
                if (s.size() < 2) break;
                if ((s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'C' && s[i+1] == 'D')) {
                    s.erase(i, 2);
                    check = false;
                }
            }
            if (check || s.size() < 2) again = false;
        }
        return s.size();
    }
};

int main() {
  string s = "CCCCDDDD";
  Solution sol;
  int ans = sol.minLength(s);
  cout << ans << endl;
}

