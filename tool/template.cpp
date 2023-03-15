#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}

int N;

class UnionFind {
public:
	UnionFind() = default;
	explicit UnionFind(size_t n)
		: m_parents(n)
		, m_sizes(n, 1) {
		std::iota(m_parents.begin(), m_parents.end(), 0);
	}
	int find(int i) {
		if (m_parents[i] == i) return i;
		return (m_parents[i] = find(m_parents[i]));
	}
	void merge(int a, int b) {
		a = find(a);
		b = find(b);
		if (a != b) {
			m_sizes[a] += m_sizes[b];
			m_parents[b] = a;
		}
	}
	bool connected(int a, int b) { return (find(a) == find(b)); }
	int size(int i) { return m_sizes[find(i)]; }

private:
	std::vector<int> m_parents;
	std::vector<int> m_sizes;
};

ll modpow(ll a, ll n, int mod) {
  ll res = 1;
  while (n>0) {
    if (n & 1) res = res * a % mod;
    a = a * a % mod;
    n >>= 1;
  }
  return res;
}

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int main() {
  cin >> N;

  int ans = N;

	// if (ans == 1) cout << "Yes" << endl;
	// else cout << "No" << endl;
	// cout << fixed << setprecision(20);
  cout << ans << endl;

  return 0;
}
