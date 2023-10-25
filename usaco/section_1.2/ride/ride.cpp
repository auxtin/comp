/*
ID: auxtin.1
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int calc(string s)
{
    int res = 1;
    // comet
    for (char &c : s)
    {
        int curr = (c - 'A' + 1);
        // cout << curr << ",";
        res *= curr;
    }
    // cout << res % 47 << endl;
    return res % 47;
}

int main()
{
    ofstream fout("ride.out");
    ifstream fin("ride.in");
    string a, b;
    fin >> a >> b;

    // cout << "comet: " << calc(a) << endl;
    // cout << "group: " << calc(b) << endl;
    if (calc(a) == calc(b))
        fout << "GO"
             << "\n";
    else
        fout << "STAY"
             << "\n";

    return 0;
}