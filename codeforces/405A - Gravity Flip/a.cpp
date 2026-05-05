#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){ 
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> a;
  while(n--) {
    int curr;
    cin >> curr;
    a.push_back(curr);
  }
  sort(a.begin(),a.end());
  for(auto x: a) {
    cout << x << " ";
  }

  return 0;
}
