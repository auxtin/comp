#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int a, b;
  cin >> a >> b;
  // cout << a << b << "\n";
  int t = 0;

  while (a <= b) {
    a *= 3;
    b *= 2;
    t++;
  }
  cout << t;

  return 0;
}

// 3*x*i  >= 2*y*i