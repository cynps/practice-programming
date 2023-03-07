#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod97 = 1000000007; // 10^9+7

// input 
string S;
int Q;
int T, F;
char C;

int solve() {
  bool rev = false;
  string tmp_back = "";
  string tmp_front = "";
  rep(i,0,Q) {
    cin >> T;
    if (T == 1) {
      rev = !rev;

    } else {
      cin >> F >> C;
      if (F == 1) {
        if (rev) {
          // S.push_back(C[0]);
          tmp_back += C;
        } else {
          // S.append(0,C[0]);
          tmp_front += C;
        }

      } else {
        if (!rev) {
          // S.push_back(C[0]);
          tmp_back += C;
        } else {
          // S.append(0,C[0]);
          tmp_front += C;
          // cout << "f2r : " << S << endl;
        } 
      }
    }
    // cout << F << C << S << endl;
  }
  reverse(tmp_front.begin(), tmp_front.end());
  S = tmp_front + S + tmp_back;
  if (rev) reverse(S.begin(), S.end());
  return 0;
}

int main() {
  cin >> S >> Q;
  solve();
  cout << S << endl;
  return 0;
}
