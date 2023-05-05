#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
      int cnt=0, i=0;
      while (true) {
        if (abs(cnt) == senate.size()) break;

        // cout << i << ": " << cnt << " " << senate.length() << " ";

        bool erased = false;
        if (cnt == 0) {
          if (senate[i]=='R') cnt++;
          else cnt--;

        } else if (cnt > 0) { // R > D
          if (senate[i]=='D') {
            senate.erase(i,1);
            erased = true;
            cnt--;
          } else {
            cnt++;
          }

        } else if (cnt < 0) { // D > R
          if (senate[i]=='R') {
            senate.erase(i,1);
            erased = true;
            cnt++;
          } else {
            cnt--;
          }

        } 

        if (!erased) {
          if (senate.length() == ++i) i=0;
        } else if (senate.length() == i) i=0;

        // cout << senate << " erased? " << "xo"[erased] << endl;
      }

      if (senate[0] == 'R') return "Radiant";
      else return "Dire";

      return senate;
    }
};

int main() {
  string s; cin >> s;
  Solution ans;
  string a = ans.predictPartyVictory(s);
  cout << a << endl;
  
}

// DRRDRDRDRDDRDRDR