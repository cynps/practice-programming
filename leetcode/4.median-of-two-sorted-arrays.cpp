#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double ans = 0.0;
    int m = nums1.size();
    int n = nums2.size();
    nums1.insert(nums1.end(), nums2.begin(), nums2.end());
    sort(nums1.begin(), nums1.end());
    int mid = (m + n) / 2 - 1;
    if ((m+n)%2 == 1) ans = (double)nums1[mid+1];
    else ans = ((double)nums1[mid] + (double)nums1[mid+1]) / 2;

    return ans;
  }
};

int main() {
  vector<int> a, b;
  a.push_back(1);
  a.push_back(2);
  b.push_back(3);
  b.push_back(4);
  b.push_back(5);
  b.push_back(6);

  Solution ans;
  double c = ans.findMedianSortedArrays(a, b);
  cout << setprecision(10);
  cout << c << endl;
  
}