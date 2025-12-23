#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ans = 0;
    unordered_map<string, int> hm = {{"Tetrahedron",4},
                                     {"Cube",6},  
                                     {"Octahedron",8},
                                     {"Dodecahedron",12},
                                     {"Icosahedron",20}
                                    };
    for(int i = 0; i < n; i++) {
        string curr;
        cin >> curr;
        ans += hm[curr];
    }
    cout << ans;
    return 0;
}