#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod = 1e9+7;

int N;
string S;

int solve() {
  int ans = 0;

  // int m[41010][41010] = {0};

  // int now[2];
  // now[0] = 21010; // x
  // now[1] = 21010; // y
  // m[now[0]][now[1]] = 1;
  // cout << "m " << m[now[0]][now[1]] << endl;

  // rep(i,1,N) {
  //   if (S[i] == 'R') {
  //     now[0]++;
  //     if (m[now[0]][now[1]] == 1) return 1;
  //     m[now[0]][now[1]] = 1;
  //   } 
  //   if (S[i] == 'L') {
  //     now[0]--;
  //     if (m[now[0]][now[1]] == 1) return 1;
  //     m[now[0]][now[1]] = 1;
  //   } 
  //   if (S[i] == 'U') {
  //     now[1]++;
  //     if (m[now[0]][now[1]] == 1) return 1;
  //     m[now[0]][now[1]] = 1;
  //   } 
  //   if (S[i] == 'D') {
  //     now[1]--;
  //     if (m[now[0]][now[1]] == 1) return 1;
  //     m[now[0]][now[1]] = 1;
  //   } 
  // }

  // int r=0,l=0,u=0,d=0;
  // rep(i,0,N) {
  //   if (S[i] == 'R') r++;
  //   if (S[i] == 'L') l++;
  //   if (S[i] == 'U') u++;
  //   if (S[i] == 'D') d++;

  //   if (r == l && u == d) return 1;
  // }

  // rep(i,0,N) {
  //   if (S[i] == 'R') {
  //     if (S[i-1] == 'L') return 1;
  //     if (i < 3) continue;
  //     string s = S.substr(i-3, 3);
  //     if (s.find("L") != std::string::npos
  //       && s.find("U") != std::string::npos
  //       && s.find("D") != std::string::npos) {
  //       return 1;
  //     }
  //   } 
  //   if (S[i] == 'L') {
  //     if (S[i-1] == 'R') return 1;
  //     if (i < 3) continue;
  //     string s = S.substr(i-3, 3);
  //     if (s.find("R") != std::string::npos
  //       && s.find("U") != std::string::npos
  //       && s.find("D") != std::string::npos) {
  //       return 1;
  //     }
  //   } 
  //   if (S[i] == 'U') {
  //     if (S[i-1] == 'D') return 1;
  //     if (i < 3) continue;
  //     string s = S.substr(i-3, 3);
  //     if (s.find("L") != std::string::npos
  //       && s.find("R") != std::string::npos
  //       && s.find("D") != std::string::npos) {
  //       return 1;
  //     }
  //   } 
  //   if (S[i] == 'D') {
  //     if (S[i-1] == 'U') return 1;
  //     if (i < 3) continue;
  //     string s = S.substr(i-3, 3);
  //     if (s.find("L") != std::string::npos
  //       && s.find("U") != std::string::npos
  //       && s.find("R") != std::string::npos) {
  //       return 1;
  //     }
  //   } 
  // }

  int x = 0, y = 0;
  map<string,int> m;
  string s = to_string(x) + ',' + to_string(y);
  m.insert(make_pair(s, 1));
  // cout << s << endl;
  
  rep(i,0,N) {
    if (S[i] == 'R') x++;
    if (S[i] == 'L') x--;
    if (S[i] == 'U') y++;
    if (S[i] == 'D') y--;
    s = to_string(x) + ',' + to_string(y);
    // cout << s << endl;

    decltype(m)::iterator it = m.find(s);
    if (it != m.end()) {
      return 1;
    } else {
      m.insert(make_pair(s, 1));
    }
  }

  return ans;
}

int main() {
  cin >> N >> S;

  int ans = solve();
  if (ans == 1) {
    cout << "Yes" << endl;
    return 0;
  } else {
    cout << "No" << endl;
  }
  // cout << ans << endl;
  return 0;
}
