#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret(2);
        bool ok = false;
        for(int i=0; i<nums.size()-1; ++i) for (int j=i+1; j<nums.size(); ++j) {
            int first = nums[i];
            int second = nums[j];
            if (first + second == target) {
                ret[0] = i; ret[1] = j;
                return ret;
            }
        }
        return ret;
    }
};

int main () {
    return 0;
}