#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, k, l, c, d, p, nl, np;
  cin >> n >> k >> l >> c >> d >> p >> nl >> np;
  int total_vol = k * l;
  int max_toast_with_drinks = total_vol / nl;
  int num_slice = c * d;
  int a = min({max_toast_with_drinks,num_slice,p/np});
  int max_toasts = a / n;
  cout << max_toasts;
  return 0;
}
