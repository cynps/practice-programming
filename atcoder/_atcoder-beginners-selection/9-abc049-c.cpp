#include <bits/stdc++.h>

// using
using namespace std;

// define
// #define soa(array) (sizeof(array)/sizeof(array[0]))

// input 
string s;

// const
string s1 = "maerd";
string s2 = "remaerd";
string s3 = "esare"; 
string s4 = "resare";

int main() {
  cin >> s;
  reverse(s.begin(), s.end());

  int n = s.length();
  for (int i=0; i<n; ) {
    if (n - i < 5) {
      cout << "NO" << endl;
      return 0;
    } else {
      string left5 = s.substr(i, 5);
      string left6 = s.substr(i, 6);
      string left7 = s.substr(i, 7);
      // cout << left5 << " " << left7 << endl;
      if (left5 == s1 || left5 == s3) i += 5;
      else if (left6 == s4) i += 6;
      else if (left7 == s2) i += 7;
      else {
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  cout << "YES" << endl;

  return 0;
}
