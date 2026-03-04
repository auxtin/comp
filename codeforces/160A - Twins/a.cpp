#include <functional>
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a;
  int temp;
  while(cin >> temp) {
    a.push_back(temp);
  }
  sort(a.begin(),a.end(),greater<int>());
  int sum = accumulate(a.begin(), a.end(), 0);
  int running_sum = 0;
  for(int i = 0; i < n; i++){ 
    int x = a[i];
    running_sum = running_sum + x;
    if(running_sum > sum - running_sum) {
      cout << i+1;
      break;
    }
  }
  return 0;
}
