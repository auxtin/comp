#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    // obvious stl sol
    // transform(s.begin(), s.end(), s.begin(),
            //   [](unsigned char c)
            //   { return tolower(c); });
    // set<char> st(s.begin(), s.end());
    // cout << ((st.size() == 26) ? "YES" : "NO");

    // visited array
    // bool v[26] = {};
    // for(auto c: s){
    //     c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
    //     v[c - 'a'] = true;
    // }
    // bool pangram = true;
    // for(auto c: v){
    //     if(c == false){
    //         pangram = false;
    //         break;
    //     }
    // }
    // cout << (pangram ? "YES":"NO");

    // bit mask
    int mask = 0;

    for(char c: s){
        c = static_cast<char>(tolower(static_cast<unsigned char>(c)));
        if('a' <= c && c <= 'z') {
            int bit = c - 'a';
            mask |= (1 << bit);
        }
    }

    int all = (1 << 26) - 1;
    cout << (mask == all ? "YES\n" : "NO\n");
    return 0;
}