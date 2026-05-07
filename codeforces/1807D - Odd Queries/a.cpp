#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n, q;
    cin >> n >> q;
    vector<int> a;
    for(int i = 0; i < n; i++) {
      int a_i;
      cin >> a_i;
      a.push_back(a_i);
    }
    vector<int> p;
    p.push_back(0);
    for(int i = 0; i < n; i++) {
      p.push_back(a[i] + p[i]);
    }
    for(int i = 0; i < q; i++) {
      int l, r, k;
      cin >> l >> r >> k;
      int l_sum = p[l - 1];
      int r_sum = p[n] - p[r];
      int total_sum = l_sum + (k * (r - l + 1)) + r_sum;
      if(total_sum % 2 != 0) {
        cout << "YES";
      }
      else {
        cout << "NO";
      }
      cout << "\n";
    }

  }
  

  return 0;
}
