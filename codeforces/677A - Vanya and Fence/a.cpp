#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, h;
  cin >> n >> h;
  int min_width = 0;
  for (int i = 0; i < n; ++i) {
    int a_i;
    cin >> a_i;
    if (a_i > h) {
      min_width += 2;
    } else {
      min_width++;
    }
  }
  cout << min_width;
  return 0;
}