#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    char prev = s[0];
    int streak = 1;
    int n = static_cast<int>(s.size());
    for(int i = 1; i < n; i++) {
        if(s[i] == prev) {
            streak++;
            if(streak == 7) break;
        } else {
            prev = s[i];
            streak = 1;
        }
    }
    cout << (streak >= 7 ? "YES\n":"NO\n");
    return 0;
}