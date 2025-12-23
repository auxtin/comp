#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    set<char> s;
    getline(cin,line);
    for(auto& c: line) {
        if(c >= 'a' && c <= 'z') {
            s.insert(c);
        }
    }
    cout << s.size();
    
    return 0;
}