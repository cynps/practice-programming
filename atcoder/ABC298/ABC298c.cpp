#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull; // ull 0 - 1 = 18446 74407 37095 51615 ≒ 1.8 * 10^19
typedef long double ld;
// const int mod = 1e9+7;
const int mod = 998244353;
const ld PI = 3.141592653589793;

inline int ctoi(char c) {return c-'0';}
inline char itoc(int i) {return i+'0';}
inline int alpint(char c) {return (int)c-64;} // A = 1
inline char intalp(int i) {return (char)i+64;} // 1 = A

#define rp(i,n) for (int i=0; i<(n); ++i)
#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rrep(i,a,b) for(int i=a; b<i; --i)

#define bitrep(bit,n) for(int bit=0; bit<(1<<n); ++bit)
#define bitfind(bit,i,n) for(int i=0; i<(n); ++i) if(bit & (1<<i))
#define bitrange(i,n,range) for(int i=0, range=1; i<(n); ++i) range *= 2
inline int bitcount(int n) {return bitset<32>(n).count();}

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

int N, Q;
// vector<priority_queue<int,vector<int>,greater<int>>> box;
// vector<priority_queue<int,vector<int>,greater<int>>> num;
vector<vector<int>> box(202020);
vector<set<int>> num(202020);

void solve() {
	int q,i;
	cin >> q >> i;
	if (q == 1) {
		int j;
		cin >> j;
		box[j].push_back(i);
		num[i].insert(j);

	} else if (q == 2) {
		vector<int> ans;
		rp (j, box[i].size()) ans.push_back(box[i][j]);
		sort(ans.begin(), ans.end());
		rp (k, ans.size()) cout << ans[k] << " \n"[k+1 == ans.size()];

	} else if (q == 3) {
		for (auto ans : num[i]) cout << ans << " ";
		cout << endl;
	}
}

int main() {
	cin >> N >> Q;
	rp(i, Q) solve();

	return 0;
}
