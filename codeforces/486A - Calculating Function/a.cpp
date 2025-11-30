#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    if(n % 2 == 0){
        cout << n / 2;
    } else {
        cout << -(n + 1) / 2;
    }
    return 0;
}

// -1^n * n 
// _________
// n = 1
// -1
// n = 2 
// -1 + 2 = 1
// n = 3 
// -1 + 2 - 3 = -2
// n = 4
// -1 + 2 - 3 + 4 = 2

// even:
// n / 2 
// odd:
// -(n + 1) / 2




