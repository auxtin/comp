#include <bits/stdc++.h>

using namespace std;

bool distinct(int year) {
  string s = to_string(year);
  set<char> st(s.begin(), s.end());
  return st.size() == s.size();
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int y;
  cin >> y;
  for (int i = y + 1;; ++i) {
    int year = i;
    if (distinct(year)) {
      cout << year;
      break;
    }
  }
  return 0;
}