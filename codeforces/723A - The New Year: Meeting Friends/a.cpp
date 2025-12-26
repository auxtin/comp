#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> dist;
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    dist.push_back(x1);
    dist.push_back(x2);
    dist.push_back(x3);
    sort(dist.begin(),dist.end());
    cout << dist.back() - dist.front();
    return 0;
}