#include <algorithm>
#include <climits>
#include <iostream>
#include <vector> 
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> f;
  for(int i = 0; i < m; i++) {
    int f_i;
    cin >> f_i;
    f.push_back(f_i);
  }
  sort(f.begin(), f.end());
  int min_diff = INT_MAX;
  int start = 0;
  int end = n;
  while (end <= m) {
    min_diff = min(min_diff, f[end - 1] - f[start]);
    start++;
    end++;
  }
  cout << min_diff;
  return 0;
}
