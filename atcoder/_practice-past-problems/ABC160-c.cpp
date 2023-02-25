#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ll mod97 = 1e9+7;

// input 
int K,N,A[201010];

int solve() {
  int dist = A[0] + (K - A[N-1]);
  rep(i,1,N) {
    int tmp = A[i] - A[i-1];
    dist = max(tmp, dist);
  }
  int ans = K - dist;
  return ans;
}

int main() {
  cin >> K >> N;
  rep(i,0,N) cin >> A[i];
  int ans = solve();
  cout << ans << endl;
  return 0;
}
