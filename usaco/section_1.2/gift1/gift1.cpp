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
#include <algorithm>
#include <climits>

using namespace std;

void reset(vector<string> &args, string &gifter, int &runningCount)
{
    // cout << "===\n";
    args.clear();
    gifter = "";
    runningCount = INT_MIN;
}

int main()
{
    ofstream fout("gift1.out");
    ifstream fin("gift1.in");
    string line, gifter = "";
    int count = 0, names, runningCount = INT_MIN;
    // unordered_map<string, int> members;
    vector<int> balance;
    vector<string> args, members;
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
            members.push_back(line);
            balance.resize(names, 0);
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
                        // cout << arg << ",";
                    }
                    auto it = find(members.begin(), members.end(), gifter);
                    int idx = distance(members.begin(), it);
                    balance[idx] -= stoi(args[0]);
                    if (stoi(args[1]) > 0)
                    {
                        runningCount = count + stoi(args[1]);
                        give = stoi(args[0]) / stoi(args[1]),
                        keep = stoi(args[0]) % stoi(args[1]);
                    }
                    else
                    {
                        give = 0;
                        keep = 0;
                    }
                    balance[idx] += keep;
                    // cout << gifter << " is gifting " << give << " to " << args[1] << " people and keeping " << keep << endl;
                    if (args[0] == "0" && args[1] == "0")
                    {
                        reset(args, gifter, runningCount);
                    }
                }
                else
                {
                    // process next lines to give the balance to resp members
                    if (count < runningCount + 1)
                    {
                        auto it = find(members.begin(), members.end(), line);
                        int idx = distance(members.begin(), it);
                        balance[idx] += give;
                        // cout << line << " will receive " << give << endl;
                        if (count == runningCount)
                        {
                            reset(args, gifter, runningCount);
                        }
                    }
                }
            }
            else
            {
                gifter = line;
                // cout << "gifter is: " << gifter << endl;
            }
        }
        count++;
    }
    for (int i = 0; i < names; i++)
    {
        fout << members[i] << " " << balance[i] << "\n";
    }
    return 0;
}