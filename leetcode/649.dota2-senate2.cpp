#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
      int cnt=0;
      queue<char> q_senate;
      
      for (int i=0;i<senate.length();++i) q_senate.push(senate[i]);

      do {
        char key = q_senate.front();
        q_senate.pop();

        if (cnt == 0) {
          if (key=='R') cnt++;
          else cnt--;
          q_senate.push(key);

        } else if (cnt > 0) { // R > D
          if (key=='D') {
            cnt--;
          } else {
            q_senate.push(key);
            cnt++;
          }

        } else if (cnt < 0) { // D > R
          if (key=='R') {
            cnt++;
          } else {
            q_senate.push(key);
            cnt--;
          }
        } 

      } while (abs(cnt) <= q_senate.size());

      if (q_senate.front() == 'R') return "Radiant";
      else return "Dire";
    }
};

int main() {
  string s; cin >> s;
  Solution ans;
  string a = ans.predictPartyVictory(s);
  cout << a << endl;
  
}

// DRRDRDRDRDDRDRDR