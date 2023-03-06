#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;

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

int solve() {
  int ans = 0;
  return ans;
}

int main() {
  cin >> N;

  int ans = solve();
  cout << ans << endl;
  return 0;
}
