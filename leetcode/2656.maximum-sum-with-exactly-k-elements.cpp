#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int ans = *nums.rbegin();
        int tmpmax = ans;
        for (int i=0;i<k-1;++i) ans += tmpmax + i + 1;
        return ans;
    }
};

int main() {
  int n;
  cin >> n;
  vector<int> nums;
  for (int i=0;i<n;++i) {
    int tmp;
    cin >> tmp;
    nums.push_back(tmp);
  }
  int k;
  cin >> k;
  Solution sol;
  int ans = sol.maximizeSum(nums, k);
  cout << ans << endl;
}