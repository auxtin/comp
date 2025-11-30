#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int res = 0;
    while(n--) {
        int p, q;
        cin >> p >> q;
        if( q - p >= 2) res++;

    }
    cout << res;
    return 0;
}