#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;    
    int officers = 0;
    int untreated = 0;
    int x;
    while(cin >> x) {
        if(x > 0) {
            officers += x;
        } else {
            if(officers > 0) {
                officers--;
            } else {
                untreated++;
            }

        }

    }
    cout << untreated;
    return 0;
}