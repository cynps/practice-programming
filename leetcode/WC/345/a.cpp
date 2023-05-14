#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool> cir(n,false);
        cir[0] = true;
        int pos = 0;
        vector<int> ans;
        for (int i=1;i<=50;++i) {
            pos += k * i;
            if (pos >= n) pos %=  n;
            if (cir[pos]) {
                break;
            } else {
              cir[pos] = true;
            }
        }
        for (int i=0;i<n;++i) {
            if(cir[i] == false) ans.push_back(i+1);
        }
        return ans;
    }
};

int main() {
  vector<string> s;
  s.push_back("7868190130M7522");
  s.push_back("5303914400F9211");
  s.push_back("9273338290F4010");
  int n = 4, k = 4;
  Solution sol;
  vector<int> ans = sol.circularGameLosers(n,k);
  for (int i=0;i<ans.size();++i) cout << ans[i] << " \n"[i+1==ans.size()];
}

