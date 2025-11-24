#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s, t;
  cin >> s >> t;
  //   if (s.size() != t.size()) {
  //     cout << "NO";
  //     return 0;
  //   }
  //   int m = t.size() - 1;
  //   int n = s.size();

  //   int i = 0;
  //   while (m >= 0 && i < n) {
  //     if (s[i] != t[m]) {
  //       cout << "NO";
  //       return 0;
  //     }
  //     i++;
  //     m--;
  //   }
  //   cout << "YES";
  reverse(t.begin(), t.end());
  if (s == t) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}