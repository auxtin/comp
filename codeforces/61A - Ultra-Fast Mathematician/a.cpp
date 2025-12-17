#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string a, b;
    cin >> a >> b;

    string s = "";
    int n = a.size();
    
    for(int i = 0; i < n; ++i){
        if(a[i] != b[i]) {
            s+= "1";
        } else {
            s+= "0";
        }
    }
    cout << s;
    return 0;
}