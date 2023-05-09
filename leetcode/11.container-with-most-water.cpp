#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int maxArea(vector<int>& height) {
    int ans = 0;
    int l = 0, r = height.size() - 1;
    do {
      int left = height[l];
      int right = height[r];
      int h, w = r - l;
      if (left > right) {
        h = right;
        --r;
      } else {
        h = left;
        ++l;
      }
      ans = max(ans, w * h);
    } while (l < r);

    return ans;
  }
};

int main() {
  vector<int> s = {1,8,6,2,5,4,8,3,7};
  Solution sol;
  int ans = sol.maxArea(s);
  cout << ans << endl;
}