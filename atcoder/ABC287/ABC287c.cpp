#include <bits/stdc++.h>
#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
const ld PI = 3.141592653589793;
inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}

int N, M;

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

int gcd(int p, int q) {
	if(p % q == 0) return q;
	return gcd(q, p % q);
}

int main() {
	// After contest だと WA になる

  cin >> N >> M;
	int u[M], v[M];
	rp(i,M) cin >> u[i] >> v[i];

	UnionFind uf(N);
	bool ans = true;
	rp(i,M) {
		u[i]--;
		v[i]--;
		if(uf.connected(u[i],v[i])) ans = false;
		uf.merge(u[i], v[i]);
	}

	int h = uf.find(0);
	rep(i,1,N) {
		int tmp = uf.find(i);
		if (tmp != h) ans = false;
	}

	if (ans) cout << "Yes" << endl;
	else cout << "No" << endl;
	// cout << fixed << setprecision(20);
  // cout << ans << endl;

  return 0;
}
