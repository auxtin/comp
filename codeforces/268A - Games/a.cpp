#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> home;
    unordered_map<int,int> away;
    for(int i = 0; i < n; i++) {
        int h, a;
        cin >> h >> a;
        home.push_back(h);
        away[a]++;
    }
    int clash = 0;
    for(auto x: home) {
        clash += away[x];
    }
    cout << clash;
    return 0;
}