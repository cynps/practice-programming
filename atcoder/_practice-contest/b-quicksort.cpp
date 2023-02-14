#include <bits/stdc++.h>

// using
using namespace std;

// input 
int n,q;

void swap(char& a, char& b) {
  // cout << a << b << endl;
  char t = a;
  a = b;
  b = t;
}

int partition(string& str, int l, int r) {
  // printf("before %s %d %d\n", str.c_str(), l, r);
  char pivot = str[r];
  int i = l - 1;
  // printf("%s %d %d\n", array.c_str(), l, r);

  for (int j=l; j<r; ++j) {
    printf("? %c %c\n", str[j], pivot);
    fflush(stdout);
    char ans;
    scanf(" %c", &ans);
    // cin >> ans;
    if (ans == '<') {
      ++i;
      swap(str[i], str[j]);
    }
  }
  swap(str[i+1], str[r]);
  // printf("after str %s %d\n", str.c_str(), i);
  // printf("after s %s %d\n", s.c_str(), i);
  return i+1;
}

void quickSort(string& str, int l, int r) {
  // printf("str %s %d %d\n", str.c_str(), l, r);
  if (l<r) {
    int pivot = partition(str, l, r);
    quickSort(str, l, pivot-1);
    quickSort(str, pivot+1, r);
  } 
}

int main() {
  scanf("%d %d", &n, &q);
  // cin >> n >> q;

  string str;
  for (int i=0; i<n; ++i) str += (char)('A' + i);

  // sizeof(s) / sizeof(s[0]) : 配列の要素数計算
  quickSort(str, 0, n-1);

  printf("! %s\n", str.c_str());
  fflush(stdout);

  return 0;
}
