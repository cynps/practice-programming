#include <bits/stdc++.h>
using namespace std;

#define rp(i,n) for (int i=0; i<(n); ++i)

int N;

int main() {
	cin >> N;
	vector<int> A(N);
	rp(i,N) cin >> A[i];

	rp(i,N) {
		if (i==0) {
			cout << A[i] << " ";

		} else if (i==N) {
			cout << A[N-1] << endl;

		} else {
			if (A[i-1] < A[i]) {
				for (int j=A[i-1]+1;j<A[i];++j) cout << j << " ";
				cout << A[i] << " ";		

			} else {
				for (int j=A[i-1]-1;j>A[i];--j) cout << j << " ";
				cout << A[i] << " ";		
			}
		}
	}

	return 0;
}
