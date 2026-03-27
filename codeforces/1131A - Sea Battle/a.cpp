#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int w_1, h_1, w_2, h_2;
  cin >> w_1 >> h_1 >> w_2 >> h_2;
  int bounded_area, ship_area, notch_area;
  bounded_area = (h_1 + h_2 + 2) * (w_1 + 2);
  ship_area = w_1 * h_1 + w_2 * h_2;
  notch_area = (w_1 - w_2) * h_2;
  int ans =  bounded_area - ship_area - notch_area;
  cout << ans;
  return 0;
}
