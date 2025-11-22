#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int k, n, w;
  cin >> k >> n >> w;
  int cost = 0;
  //   for (int i = 1; i <= w; ++i) {
  //     cost += k * i;
  //   }
  cost = k * (w * (w + 1) / 2); // k * summation i=1:w k*i
  n - cost > 0 ? cout << "0" : cout << cost - n;
  return 0;
}