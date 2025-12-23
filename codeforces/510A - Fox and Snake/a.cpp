#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    for(int r = 0; r < n; r++) {
        if(r % 2 == 0) {
            // for(int i = 0; i < m; i++) {
            //     cout << "#";
            // }
            cout << string(m,'#');
        } else if((r / 2) % 2 == 0) {
            // for(int i = 0; i < m - 1; i++) {
            //     cout << ".";
            // }
            // cout << "#";
            cout << string(m-1,'.') << '#';
        } else {
            // cout << "#";
            // for(int i = 0; i < m - 1; i++) {
            //     cout << ".";
            // }
            cout << '#' << string(m-1,'.') ;
        }
        cout << "\n";
    }

    return 0;
}
// go to (1,m), down 2 rows to 

// #########
// ........#
// #########
// #........
// #########
// ........#
// #########
// #........
// #########


// even is filled 

