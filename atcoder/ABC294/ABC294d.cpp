#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
#define bitrep(bit,n) for(int bit=0; bit<(1<<n); ++bit)
#define bitfind(bit,i,n) for(int i=0; i<(n); ++i) if(bit & (1<<i))
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}

int N,Q;

int main() {
  cin >> N >> Q;
	queue<int> call, wait, e3;
	set<int> list, called;
	// int counte3 = 0;
	// int counter = 0;

	rp(i,N) list.insert(i+1);

	rp(i,Q) {
		int e1;
		cin >> e1;

		if (e1 == 1) {
			// ++counter;
			// wait.push(counter);
			// cout << "a count:" << counter;
			decltype(list)::iterator f = list.begin();
			called.insert(*f);
			list.erase(f);

		} else if (e1 == 2) {
			int x;
			cin >> x;
			// rp(j,x) {
			// 	wait.pop();
			// 	if (!wait.empty()) break;
			// }
			// cout << "b ";
			decltype(called)::iterator f = called.find(x);
			called.erase(f);

		} else if (e1 == 3) {
			// e3.push(wait.front());
			// cout << "c ";
			decltype(called)::iterator f = called.begin();
			e3.push(*f);
		}

		// cout << " wait front:" << wait.front() << endl;
	}

	while(!e3.empty()) {
		cout << e3.front() << endl;
		e3.pop();
	}

  return 0;
}
