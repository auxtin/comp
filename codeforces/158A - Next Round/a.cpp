#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k, cutoff;
  cin >> n >> k;
  int count = 0;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  cutoff = v[k - 1];
  count = count_if(v.begin(), v.end(),
                   [cutoff](int x) { return x > 0 && x >= cutoff; });
  cout << count;
  return 0;
}