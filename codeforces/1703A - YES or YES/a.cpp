#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while(n--) {
        string curr;
        cin >> curr;
        for(char& c: curr) {
            c = tolower(c);
        }
        if(curr == "yes") {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}