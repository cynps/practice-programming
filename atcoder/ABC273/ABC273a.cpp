#include <bits/stdc++.h>
using namespace std;

int N;

int f(int k) {
	if (k==0) return 1;
	else return k * f(k-1);
}

int main() {
	cin >> N; int ans = f(N);
	cout << ans << endl;

	return 0;
}
