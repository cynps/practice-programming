#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a; i<b; ++i)

void printNums(vector<vector<int>> nums) {
  for (int i=0; i<nums.size();++i) for (int j=0;j<nums[i].size();++j) {
    cout << nums[i][j] << " \n"[j+1==nums[i].size()];
  }
}

void printNums(vector<int> nums) {
  for (int i=0; i<nums.size();++i) {
    cout << nums[i] << " \n"[i+1==nums.size()];
  }
}

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-2; i++){
            int low = i+1, high = n-1;
            while(low < high){
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++;
                }
                else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }
                else{
                    set.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;
    }
};

int main() {
  // int n; cin >> n;
  // vector<int> nums(n);
  // for (int i=0; i<n; ++i) cin >> nums[i];
  vector<int> nums;
  Solution sol;

  int i = 1;
  nums = {-1,0,1,2,-1,-4};
  cout << i << ": numsize: " << nums.size() << endl;
  printNums(sol.threeSum(nums));

  ++i;
  nums = {0,0,0,0,-1,-1,-2,-3,2};
  cout << i << ": numsize: " << nums.size() << endl;
  printNums(sol.threeSum(nums));

  ++i;
  nums = {0,1,0,1,-1,-1,-2,-3,2};
  cout << i << ": numsize: " << nums.size() << endl;
  printNums(sol.threeSum(nums));

  ++i;
  nums = {-1,1,0};
  cout << i << ": numsize: " << nums.size() << endl;
  printNums(sol.threeSum(nums));

  ++i;
  nums = {0,0,0};
  cout << i << ": numsize: " << nums.size() << endl;
  printNums(sol.threeSum(nums));

  ++i;
  nums = {0,0,0,0};
  cout << i << ": numsize: " << nums.size() << endl;
  printNums(sol.threeSum(nums));

  ++i;
  nums = {1,2,-2,-1};
  cout << i << ": numsize: " << nums.size() << endl;
  printNums(sol.threeSum(nums));

  // ++i;
  // nums = {};
  // for (int i=-1500;i<1499;++i) nums.push_back(i);
  // cout << i << ": numsize: " << nums.size() << endl;
  // printNums(sol.threeSum(nums));

}