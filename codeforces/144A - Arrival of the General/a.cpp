#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int low = INT_MAX;
    int low_idx = 0 ;
    int high = INT_MIN;
    int high_idx = 0;
    for(int i = 0; i < n; ++i) {
        int curr;
        cin >> curr;
        if( curr <= low) {
            low_idx = i;
            low = curr;
        }
        if( curr > high) {
            high_idx = i;
            high = curr;
        }
    }
    // cout << low_idx << "," << high_idx << "\n";
    int timeNeeded = (n - 1 - low_idx) + high_idx;
    // cout << (low_idx < high_idx) ? (timeNeeded - 1)o: timeNeeded;
    if(low_idx < high_idx) {
        cout << timeNeeded - 1;
    } else {
        cout << timeNeeded;
    }
    return 0;

}
// approach is simple: find the indices of the low and high numbers.
// doa check if the high index < low index. this will ean they swap and
// reduce the traversal by one sec when they are adjacent
// low 10 pos 2 -> 7 = 7 - 2  = 5 sec
// high 76 pos 6 -> 0 = 6 - 0 = 6 sec
//                            - 1 sec for overlap
//                              10 