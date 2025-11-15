#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  string s;
  cin >> n >> s;
  int removal = 0;
  for (int i = 0; i < n - 1; ++i) {
    if (s[i] == s[i + 1]) {
      removal++;
    }
  }
  cout << removal;
  return 0;
}