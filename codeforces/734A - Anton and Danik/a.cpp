#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  string str;
  cin >> n >> str;
  int A = 0;
  int D = 0;
  for (int i = 0; i < n; i++) {
    if (str[i] == 'A') {
      A++;
    } else if (str[i] == 'D') {
      D++;
    }
  }

  if (A == D)
    cout << "Friendship";
  else if (A > D)
    cout << "Anton";
  else if (A < D)
    cout << "Danik";
  return 0;
}