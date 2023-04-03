#include <bits/stdc++.h>
using namespace std;
#define rp(i,n) for (int i=0; i<(n); ++i)
typedef long long ll; // ull 0 - 1 = 18446 74407 37095 51615 ≒ 1.8 * 10^19

ll N, T;

int main() {
	cin >> N >> T;
	int A[N];
	rp(i,N) cin >> A[i];

	ll sum = 0;
	rp(i,N) sum += A[i];

	if (T >= sum) T %= sum;

	// cout << "sum " << sum << " T " << T << endl;

	rp(i,N) {
		if (T <= A[i]) {
			cout << (i+1) << " " << T << endl;
			return 0;
		}
		T -= A[i];
	}

	cout << N << " " << A[N-1] << endl;

	return 0;
}
