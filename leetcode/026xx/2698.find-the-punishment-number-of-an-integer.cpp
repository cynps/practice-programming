#include <bits/stdc++.h>
using namespace std;

bool partition(int i, int sum, int index, const string &sq_str) {
    if (index == sq_str.size())
        return sum == i;

    for (int j = index + 1; j <= sq_str.size(); ++j) {
        int val = stoi(sq_str.substr(index, j - index));
        if (sum + val > i) return false;
        if (partition(i, sum + val, j, sq_str))
            return true;
    }
    return false;
}

bool check(int i) {
    string sq_str = to_string(i * i);
    return partition(i, 0, 0, sq_str);
}

class Solution {
public:
    int punishmentNumber(int n) {
        int ans = 1;
        for (int i = 2; i <= n; i++) {
          if (check(i)) ans += i * i;
        }
        return ans;
    }
};

int main() {
  int num = 10;
  Solution sol;
  int ans = sol.punishmentNumber(num);
  cout << ans << endl;

  num = 37;
  ans = sol.punishmentNumber(num);
  cout << ans << endl;

}