#include <bits/stdc++.h> 

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    cin >> t;
    vector<int> v;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int count = 0, place = 1;
        while(n > 0) {
            int r = n % 10;
            if(r != 0) {
                v.push_back(r * place);
                count++;
            }
            n = n / 10;
            place *= 10;
        }   
        cout << count << "\n";
        for(auto a: v) {
            cout << a << " ";
        }
        v.clear();
        cout << "\n";
    }
    return 0;
}