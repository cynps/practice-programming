#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rep(i,a,b) for(int i=a; i<b; ++i)

int N;

int main() {
	cin >> N;
	vector<int> A(N,0);
	vector<int> AN(N,0);
	cin>>A[0];
	rep(i,1,N){
		cin>>A[i];
		if (i%2==0) AN[i]=A[i]-A[i-1]+AN[i-1];
		else AN[i]=AN[i-1];
	}

	// rep(i,0,N) cout << A[i] << " " << AN[i] << endl;

	int Q;
	cin>>Q;
	int l,r;
	rep(i,0,Q){
		cin>>l>>r;
		auto left_it = upper_bound(A.begin(), A.end(), l);
		int left_idx = left_it - A.begin();
		auto right_it = upper_bound(A.begin(), A.end(), r);
		int right_idx = right_it - A.begin();
		if (right_it == A.end()) right_idx--;

		int ans = 0;
		if (left_idx % 2 == 0) {
			ans += A[left_idx] - l;
		}
		if (right_idx % 2 == 0) {
			right_idx--;
			ans += r - A[right_idx];
		} 
		ans += AN[right_idx] - AN[left_idx];

		// cout << ans << ": " << 
		// 	*left_it << " " << *right_it << " | " <<  
		// 	left_idx << " " << right_idx << " | " <<
		// 	A[left_idx] - l << " " << r - A[right_idx] << " | " << 
		// 	AN[left_idx] << " " << AN[right_idx] << endl << endl;
		cout << ans << endl;
	}

	return 0;
}

