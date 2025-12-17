#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cout << (i % 2 == 0 ? "I hate" : "I love");
        cout << (i == n - 1? " it" : " that ");
    }
    return 0;
}