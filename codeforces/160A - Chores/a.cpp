#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a, b;
  cin >> n >> a >> b;
  
  vector<int> v(n);

  for(int i = 0; i < n; i++) {
    int curr;
    cin >> curr;
    v[i] = curr;
  }
  sort(v.begin(), v.end());
  cout << v[b] - v[b - 1];
  return 0;
}
