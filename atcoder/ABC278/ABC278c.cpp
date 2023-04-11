#include <iostream>
#include <vector>
#include <set>
#include <queue>
using namespace std;
typedef long long ll;
#define rp(i,n) for (int i=0; i<(n); ++i)

ll N, Q;

int main() {
	cin >> N >> Q;
	set<pair<ll,ll>> follow;
	queue<string> ans;

	for (int i=0; i<Q; ++i) {
		int tmp; cin >> tmp;
		ll a, b; cin >> a >> b;
		a--;
		b--;
		if (tmp == 1) follow.emplace(a, b);
		else if (tmp == 2) follow.erase({a, b});
		else { //tmp == 3
			if (follow.find({a,b}) != follow.end() && follow.find({b,a}) != follow.end()) ans.push("Yes");
			else ans.push("No");

		}
	}

	while (!ans.empty()) {
		cout << ans.front() << endl;
		ans.pop();
	}

	return 0;
}
