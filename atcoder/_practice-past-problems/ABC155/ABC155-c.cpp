#include <bits/stdc++.h>
using namespace std;
using ll = long long;

// input 
int n;

int solve() {
  return 0;
}

int main() {
  cin >> n;
  string s;
  map<string, int> m;
  for (int i=0; i<n; ++i) {
    cin >> s;
    decltype(m)::iterator it = m.find(s);
    if (it != m.end()) {
      int tmp = m.at(s) + 1;
      m.erase(s);
      m.insert(make_pair(s, tmp));
    } else {
      m.insert(make_pair(s, 0));
    }
  }

  int ma = -1;
  for(auto& p: m) if (ma < p.second) ma = p.second;
  for(auto& p: m) if (p.second == ma) cout << p.first.c_str() << endl;

  return 0;
}
