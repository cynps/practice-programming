#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
typedef long long ll;
using namespace std;

int N;
string S;

ll solve() {
  ll R = 0, G = 0, B = 0;
  rep(i,0,N) {
    if (S[i] == 'R') R++;
    if (S[i] == 'G') G++;
    if (S[i] == 'B') B++;
  }

  ll ans = R * G * B;

  rep(i,0,N) rep(j,i+1,N) {
    int k = j + (j - i);
    if (k < N) {
      if (S[i] == S[j]) continue;
      if (S[j] == S[k]) continue;
      if (S[k] == S[i]) continue;
      ans--;
    } 
  }
  return ans;
}

int main() {
  cin >> N >> S;
  ll ans = solve();
  cout << ans << endl;
  return 0;
}
