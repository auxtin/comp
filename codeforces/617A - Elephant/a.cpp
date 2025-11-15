#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int x;
  cin >> x;
  int remainder = x % 5;
  int quotient = x / 5;
  if (remainder == 0) {
    cout << quotient;
  } else {
    cout << quotient + 1;
  }
  return 0;
}