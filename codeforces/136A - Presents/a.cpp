#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {    
        int receiver;
        cin >> receiver;
        v[receiver - 1] = i + 1;
    }
    // cout << "hello world";
    for(auto i:v) {
        cout << i << " ";
    }
    return 0;
}
// i   = 1 2 3 4
// p_i = 2 3 4 1

// 1->2
// 2->3
// 3->4
// 4->1

// 1->4
// 2->1
// 3->2
// 4->3

// giver -> receiver
// p[1] = x → person 1 gives to person x

// p[2] = y → person 2 gives to person y

// receiver -> giver

