#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int X = 0;
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    if (s[1] == '+') {
      X++;
    } else {
      X--;
    }
  }
  cout << X;
  return 0;
}