#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set<int> s;
    int curr;
    while(cin >> curr) {
        s.insert(curr);
    }

    cout << 4 - s.size();

    return 0;
}