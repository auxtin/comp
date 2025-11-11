#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  cin >> s;
  sort(s.begin(), s.end(), [](char a, char b) { return a < b; });
  bool first = true;
  string res;
  for (auto c : s) {
    if (c != '+') {
      if (!first)
        res += '+';
      first = false;
      res += c;
    }
  }

  cout << res;

  return 0;
}