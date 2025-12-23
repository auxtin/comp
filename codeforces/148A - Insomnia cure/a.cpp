#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l,k,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vector<char> v(d+1);
    vector<int> divsors = {k,l,m,n};
    for(auto& div: divsors) {
        for(int x = div; x <= d; x+=div) v[x] = 1;
    }
    int ans = 0;
    for(auto& x : v) {
        if (x) ans++;
    }
    cout << ans;
    return 0;
}
// v1 1 
// 2 1 2
// 3 1     3
// 4 1  2     4
// 5 1
// 6 1 2   3  4
// 7 1
// 8 1  2     4
// 9 1  2  3
// 10 1 2
// 11 1 2
// 12 1 2  3  4