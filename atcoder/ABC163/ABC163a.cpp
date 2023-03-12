#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

int N;

int main() {
  cin >> N;

	ld ans = (ld)N * PI * 2;

	cout << fixed << setprecision(20);
  cout << ans << endl;
  return 0;
}
