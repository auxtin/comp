#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  int max_capacity = 0, running_sum = 0;
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    running_sum = running_sum - a + b;
    max_capacity = max(running_sum, max_capacity);
  }
  cout << max_capacity;
  return 0;
}