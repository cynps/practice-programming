#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll N, Q;
vector<ll> A;

ll solve(int q) {
	if (q == 1) {
		int tmp;
		cin >> tmp;
		vector<ll> ta(N,tmp);
		A = ta;
		return -1;

	} else if (q == 2) {
		int ti, tx; cin >> ti >> tx;
		ti--;
		A[ti] += tx;
		return -1;

	} else {
		int iq; cin >> iq;
		iq--;
		return A[iq];

	}
}

int main() {
	cin >> N;
	A.resize(N);
	for (int i=0;i<N;++i) cin >> A[i];
	cin >> Q;

	vector<ll> answers;
	for (int i=0;i<Q;++i) {
		int q; cin >> q;
		ll ans = solve(q);
		if (ans != -1) answers.push_back(ans);
	}

	// TLE
	for (int i=0;i<answers.size();++i) cout << answers[i] << endl;
	return 0;
}
