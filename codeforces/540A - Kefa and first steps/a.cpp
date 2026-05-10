#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n; cin >> n;
  vector<int> a;
  for(int i = 0; i < n; i++){
    int curr;
    cin>>curr;
    a.push_back(curr);
  }
  int l = 0;
  int maxLength = 0;
  for(int r = 1; r < n; r++) {
    if(a[r] < a[r-1]) {
      maxLength = max(maxLength, r - l);
      l = r;
    }
  }
  maxLength = max(maxLength, n - l);
  cout << maxLength;
  return 0;
}
