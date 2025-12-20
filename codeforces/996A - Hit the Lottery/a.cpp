#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    int ans = 0;
    int denoms[] = {100, 20, 10, 5, 1}; 
    for(auto bill: denoms) {
        ans += (n/bill);
        n %= bill;
    }
    cout << ans;
    return 0;
}