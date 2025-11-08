#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int row = -1;
  int col = -1;

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      int x;
      cin >> x;
      if (x == 1) {
        row = i;
        col = j;
        // break;
      }
    }
  }
  cout << abs(row - 2) + abs(col - 2);
  return 0;
}

// m[2][2] - zero index

// approach iterate thru row by row, and find 1

// the coordinate will be zero index, so from there find
// 1,4  2 - 1 + 4 - 2 = 3
// find operator
// init row var
//     init col
//     increment each token
// increments after each line
// ans = abs(2 - i_row) + abs(2 - i_col)
