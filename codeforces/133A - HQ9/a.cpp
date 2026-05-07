#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string p;
  cin >> p;
  if(p.find('H') != p.npos || p.find('Q') != p.npos ||p.find('9') != p.npos) {
    cout << "YES";
    return 0;
  }
  cout << "NO";
  return 0;
}
