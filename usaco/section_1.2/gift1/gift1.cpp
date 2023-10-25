/*
ID: auxtin.1
TASK: gift1
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    // ofstream fout("gift1.out");
    ifstream fin("gift1.in");
    string line, gifter = "";
    int count = 0, names, runningCount = INT_MIN;
    unordered_map<string, int> members;
    vector<string> args;
    while (getline(fin, line))
    {
        // init # members
        if (count == 0)
        {
            names = stoi(line);
        }
        // init 0 balance
        else if (count > 0 && count < names + 1)
        {
            members[line] = 0;
        }
        // person paying
        else
        {
            int give, keep;
            if (gifter != "")
            {
                if (runningCount == INT_MIN)
                {
                    // process amount and how many gift recipients
                    istringstream iss(line);
                    string arg;
                    while (iss >> arg)
                    {
                        args.push_back(arg);
                    }
                    if (stoi(args[0]) > 0)
                    {
                        members[gifter] -= stoi(args[0]);
                        runningCount = count + stoi(args[1]);
                        give = stoi(args[0]) / stoi(args[1]),
                        keep = stoi(args[0]) % stoi(args[1]);
                        members[gifter] += keep;
                        // cout << gifter << " is gifting " << give << " to " << args[1] << " people and keepin " << keep << endl;
                    }
                }
                else
                {
                    // process next lines to give the balance to resp members
                    if (count < runningCount + 1)
                    {
                        members[line] += give;
                        // cout << line << " will receive " << give << endl;
                        if (count == runningCount)
                        {
                            // cout << "===\n";
                            args.clear();
                            gifter = "";
                            runningCount = INT_MIN;
                        }
                    }
                }
            }
            else
            {
                gifter = line;
            }
        }
        count++;
    }

    for (auto &p : members)
    {
        cout << p.first << "," << p.second << endl;
    }
    return 0;
}