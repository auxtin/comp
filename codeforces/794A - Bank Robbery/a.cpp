#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a,b,c;
  cin >> a >> b >> c;
  int n;
  cin >> n;
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    if(temp > b && temp < c) {
      cnt++;
    }
  }
  cout << cnt;
  return 0;
}
