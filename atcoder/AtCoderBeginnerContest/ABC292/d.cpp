#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)
using namespace std;
typedef long long ll;
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;

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

int solve() {
  int ans = 0;
  vector<int> u(M), v(M);

  UnionFind uf(N);

  rep(i,0,M) {
    cin >> u[i] >> v[i];
    // cout << "uv1 " << u[i] << " " << v[i] << endl;
    --u[i];
    --v[i];
    // cout << "uv2 " << u[i] << " " << v[i] << endl;
  }

  rep(i,0,M) {
    uf.merge(u[i], v[i]);
  }

  map<int,int> m;

  rep(i,0,M) {
    int ufi = uf.find(u[i]);
    decltype(m)::iterator it = m.find(ufi);
    if (it != m.end()) {
      m.at(ufi)++;
    } else {
      m.insert(make_pair(ufi, 1));
    }
  }

  rep(i, 0 ,M) {
    int ufi = uf.find(u[i]);
    // cout << "ui:" <<  u[i] << " " << ufi << " " << m.at(ufi) << endl;

    if (uf.size(u[i]) != m.at(ufi)) {
      return 0;
    }
  }

  ++ans;

  return ans;
}

int main() {
  cin >> N >> M;

  if (M == 0) {
    cout << "No" << endl;
    return 0;
  }

  int ans = solve();

  // cout << ans << endl;
  if (ans == 0) cout << "No" << endl;
  else cout << "Yes" << endl;

  return 0;
}
