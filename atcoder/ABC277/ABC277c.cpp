#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define rp(i,n) for (int i=0; i<(n); ++i)

int N;

int main() {
	cin >> N;
	map<int, vector<int>> graph;
	for (int i=0;i<N;++i) {
		int a,b; cin>>a>>b;
		graph[a].push_back(b); // 各エッジに対して重複なくノードが生える
		graph[b].push_back(a); // 双方向
	}
	queue<int> que;
	que.push(1); // 探索初期値
	set<int> s;
	s.insert(1); // 出力初期値
	while (!que.empty()) {
		int v = que.front();
		que.pop();
		for (int i : graph[v]) { // 各エッジのノードについて調べる
			if (!s.count(i)) { // 探索済みのエッジ出ない場合は探索対象とする
				que.push(i);
				s.insert(i);
			}
		}
	}
	cout << *s.rbegin() << endl;

	return 0;
}
