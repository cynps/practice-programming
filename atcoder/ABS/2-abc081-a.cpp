#include <bits/stdc++.h>

// using
using namespace std;

// input 
string s;

int main() {
  cin >> s;
  int count = 0;
  for (int i=0; i<3; ++i) if (s[i]=='1') ++count;
  cout << count << endl;
  return 0;
}
