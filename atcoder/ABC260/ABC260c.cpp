#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N,X,Y;

int main() {
  cin >> N >> X >> Y;
	pair<ll,ll> red = make_pair(N, 1);
	pair<ll,ll> blue;
	if (N == 1) {cout << 0 << endl; return 0;}
	if (red.first >= 2) {
		blue = make_pair(red.first, red.second * X);
		red.first--;
	}
	if (blue.first >= 2) {
		red.second += blue.second;
		blue.first--;
		blue.second = blue.second * Y;
	}

	while (true) {
		if (red.first >= 2) {
			blue.second += red.second * X;
			red.first--;
		}
		if (blue.first >= 2) {
			red.second += blue.second;
			blue.first--;
			blue.second = blue.second * Y;
		}
		if (red.first == 1 && blue.first == 1) break;
	}

  ll ans = blue.second;

  cout << ans << endl;

  return 0;
}

