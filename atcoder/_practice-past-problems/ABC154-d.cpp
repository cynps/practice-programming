#include <bits/stdc++.h>

// using
using namespace std;
using ll = long long;

// input 
int n,k;
double p[200010];

int solve() {
  return 0;
}

int main() {
  cin >> n >> k;
  for (int i=0; i<n; ++i) cin >> p[i];

  double max_sum = 0;
  for (int i=0; i<k; ++i) max_sum += (double)(p[i]+1.0)/2.0;

  double tmp_sum = max_sum;
  // cout << tmp_sum << " " << max_sum << endl;

  for (int i=0; i<n-k; ++i) {
    double tmp_pi = (double)(1.0+p[i])/2.0;
    double tmp_pik = (double)(1.0+p[i+k])/2.0;
    tmp_sum = tmp_sum - tmp_pi + tmp_pik;
    if (tmp_sum > max_sum) {
      max_sum = tmp_sum;
    }
    // cout << tmp_sum << " " << max_sum << " pi:" << tmp_pi << " pik:" << tmp_pik << endl;
  }

  cout << fixed << setprecision(10) << max_sum << endl;

  return 0;
}
