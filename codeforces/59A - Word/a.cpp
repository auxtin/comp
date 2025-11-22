#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string word;
  cin >> word;
  int uppercase_count = 0;
  int lowercase_count = 0;
  for (char c : word) {
    if (isupper(c)) {
      uppercase_count++;
    } else if (islower(c)) {
      lowercase_count++;
    }
  }
  if (uppercase_count > lowercase_count) {
    // cout << "upper is greater than lower\n";
    for (char &c : word)
      c = toupper(c);
  } else {
    // cout << "upper is less than lower\n";
    for (char &c : word)
      c = tolower(c);
  }
  cout << word;
  return 0;
}