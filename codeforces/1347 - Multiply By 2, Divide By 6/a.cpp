#include <iostream>

using namespace std;
int factor(int &n, int f) {
  int count = 0;
  while(n % f == 0) {
    count++;
    n /= f;
  }
  return count;
}
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  for(int i = 0; i < t; i++) {
    int n;
    cin >> n;
    int a = factor(n,2);
    int b = factor(n,3);
    if(n != 1 || a > b) {
      cout << "-1" << "\n";
      continue;
    }
    cout << 2*b - a << "\n";
  }
  return 0;
}
