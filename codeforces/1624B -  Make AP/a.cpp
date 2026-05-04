#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--){
    int a, b, c;
    cin >> a >> b >> c;
    bool ok = false; 
    int target;
    // b
    target = (a + c) / 2;
    if((a + c) % 2 == 0 && target > 0 and target % b == 0) {
      ok = true;
    }
    // a
    target = 2 * b - c;
    if(target > 0 && target % a == 0) {
      ok = true;
    }
    // c
    target = 2 * b - a;
    if(target > 0 && target % c == 0) {
      ok = true;
    }
    cout << (ok ? "YES": "NO") << "\n";
  }

  return 0;
}
