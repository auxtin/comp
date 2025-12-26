#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b, c;
    cin >> a >> b >> c;
    unordered_map<char,int> hm;
    for(auto x: a) hm[x]++;
    for(auto x: b) hm[x]++;
    for(auto ch: c) {
        auto it = hm.find(ch);
        if(it == hm.end()) {
            cout << "NO";
            return 0;
        }
        if(--(it->second) < 0) {
            cout << "NO";
            return 0;
        }
        if(it->second == 0) hm.erase(it);
    }
    cout << ((hm.empty()) ? "YES" : "NO");
    return 0;
}