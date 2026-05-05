#include <iostream>
#include <vector>

using namespace std;

int main() {
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  int t; 
  cin >> t;
  for(int i = 0; i < t; i++) {
    long long n;
    cin >> n;
    vector<int> prices;
    vector<int> overpriced;
    for(int j = 0; j < n; j++) {
      int curr;
      cin >> curr;
      prices.push_back(curr);
    }
    int min_so_far = prices[0];
    for(int j = 1; j < n; j++) {
      if(prices[j] > min_so_far) {
        overpriced.push_back(j+1);
      } else {
        min_so_far = prices[j];
      }
    }
    cout << overpriced.size() << "\n";
    for(auto index: overpriced) {
      cout << index << " ";
    }
    cout << "\n";
  }
  return 0;
}
