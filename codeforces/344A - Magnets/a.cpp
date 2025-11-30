#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int last;
    cin >> last;
    int groups = 1;
    for(int i = 1; i < n; ++i) {
        int curr;
        cin >> curr;
        if(last!=curr) {
            groups++;
            last = curr;
        }
    }
    cout << groups;
    return 0;
}