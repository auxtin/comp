#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<int> a;
  for(int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  sort(a.begin(), a.end());
  int res = 0;
  for(auto x: a) {
    if(x >= 0 || m == 0) {
      break;
    } else {
      res += (-x);
      m--;
    }
  }
  cout << res;
  return 0;
}
