#include <bits/stdc++.h>
using namespace std;    
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<char> seen(n+1,0);
    int p; cin >> p;
    for(int i = 0; i < p; ++i) {
        int x; cin >> x;
        seen[x] = 1;
    }
    int q; cin >> q;
    for(int i = 0; i < q; ++i) {
        int x; cin >> x;
        seen[x] = 1;
    }
    bool ok = true; 
    for(int i = 1; i <= n; ++i) {
        if(!seen[i]) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "I become the guy." : "Oh, my keyboard!");
    return 0;

}