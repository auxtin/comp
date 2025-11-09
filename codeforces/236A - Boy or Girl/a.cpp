#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  set<char> visited;

  string s;
  cin >> s;
  for (auto c : s) {
    visited.insert(c);
  }

  if (visited.size() % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
  return 0;
}