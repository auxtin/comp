#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n;
  cin >> n;
  int count = 0;
  while (n > 0) {
    if (n % 10 == 4 || n % 10 == 7) {
      count++;
    }
    n /= 10;
  }
  //   cout << count << "\n";
  if (count == 4 || count == 7) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}