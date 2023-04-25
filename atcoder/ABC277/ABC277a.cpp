#include <bits/stdc++.h>
using namespace std;

int N, X;

int main() {
	cin >> N >> X;
	int p, ans = -1;
	for (int i=0;i<N;++i) {
		cin >> p;
		if (p == X) ans = i;
	}

	cout << ans + 1 << endl;

	return 0;
}
