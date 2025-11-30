#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    vector<char> v;

    cin >> n >> t;
    int m = n;
    while(m--) {
        char c;
        cin >> c;
        v.push_back(c);
    }
    for(int j = 0; j < t; j++) {
        for(int i = 0; i < n - 1; ++i ) {
            char curr = v[i];
            char next = v[i+1];
            if(curr == 'B' && next == 'G') {
                swap(v[i],v[i+1]);
                i+=1;
            }
        }
    }
    for(auto x: v) {
        cout << x;
    }
    return 0;
}