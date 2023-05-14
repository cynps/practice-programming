#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
      int ans = 0;
      int ns = nums.size();
      int nns = nums[0].size();
      for (int i=0;i<ns;++i) {
        sort(nums[i].begin(), nums[i].end());
      }
      for (int j=nns-1;j>=0;--j) {
        int num_max = 0;
        for (int i=0;i<ns;++i) {
          if (num_max < nums[i][j]) num_max = nums[i][j];
        }
        cout << num_max << endl;
        ans += num_max;
      }

      return ans;
    }
};

int main() {
  vector<vector<int>> nums;
  // cin >> s;
  Solution sol;
  int ans = sol.matrixSum(nums);
  cout << ans << endl;
}