#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, k;
  cin >> n >> k;
  long long num_odds = (n + 1) / 2;
  if(k > num_odds) {
    cout << 2 * (k - num_odds);
  } else {
    cout << 2 * k - 1;
  }
 
  return 0;
}
