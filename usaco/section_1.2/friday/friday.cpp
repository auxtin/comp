/*
ID: auxtin.1
TASK: friday
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */

/*
    - Jan 1 1990 was a monday
    - Month counts:
        28:
            February during leap years
                - is a leap if divisible by 4, but for century years, if divisible by 400
                    century years, not millenial years
        29:
            during not leap years
        30:
            September, April, June, November
        31:
            Rest of the months
*/

// leap year 1900
//  1   2,  3,  4,  5,  6,  7,  9, 10, 11, 12
// 31, 29, 31, 30, 31, 30, 31, 30, 31, 30, 31
// S ,  T,  T,  F,  Su, W,  F,  M,  W,  S,  T

// non leap year
//  1   2,  3,  4,  5,  6,  7,  9, 10, 11, 12
// 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31

#include <iostream>
#include <unordered_map>
#include <fstream>
#include <string>
// 1900 Jan 1 (monday) + N years
using namespace std;
// given a month and year how can you calculate what day the 13 lands on?

int main()
{
    // ofstream fout("friday.out");
    ifstream fin("friday.in");
    int a;
    fin >> a;
    // iterate from 1900 to 1900 + N - 1
    // calculate the number of 13s that land for that year per day
    // how do leap years affect the distribution?
    // 365 (leap year) / 7 =  52 weeks
    // 366 (normal year) / 7 = 52.28...
    // starting from 1900, the next year Jan 1 is the next day, i.e Monday, Tuesday
    // but after 4year, that leap year it skips a day
    int dayOfWeek = 0;     // 0 represents Sunday, 1 represents Monday, ..., 6 represents Saturday
    int dayCount[7] = {0}; // Initialize an array to count occurrences for each day of the week

    for (int month = 1; month <= 12; ++month)
    {
        for (int day = 1; day <= 31; ++day)
        {
            if (day == 13)
            {
                dayCount[dayOfWeek] += 1;
            }
            dayOfWeek = (dayOfWeek + 1) % 7; // Move to the next day of the week
        }
    }

    // Print the results
    std::cout << "Occurrences of the 13th on each day of the week in 1900:" << std::endl;
    std::cout << "Sunday: " << dayCount[0] << " times" << std::endl;
    std::cout << "Monday: " << dayCount[1] << " times" << std::endl;
    std::cout << "Tuesday: " << dayCount[2] << " times" << std::endl;
    std::cout << "Wednesday: " << dayCount[3] << " times" << std::endl;
    std::cout << "Thursday: " << dayCount[4] << " times" << std::endl;
    std::cout << "Friday: " << dayCount[5] << " times" << std::endl;
    std::cout << "Saturday: " << dayCount[6] << " times" << std::endl;
    return 0;
}
/*
Jan 13 1900 is what day?
            JAN
 M   T   W   TH  F   S   SS
 1,  2,  3,  4,  5,  6,  7,
 8,  9, 10, 11, 12, 13, 14,
15, 16, 17, 18, 19, 20, 21,
22, 23, 24, 25, 26, 27, 28,
29, 30, 31

            FEB
 M   T   W   TH  F   S   SS
             1,  2,  3,  4,
 5,  6,  7,  8,  9, 10, 11,
12, 13, 14, 15, 16, 17, 18,
19, 20, 21, 22, 23, 24, 25,
26, 27, 28

            MAR
 M   T   W   TH  F   S   SS
             1,  2,  3,  4,
 5,  6,  7,  8,  9, 10, 11,
12, 13, 14, 15, 16, 17, 18,
19, 20, 21, 22, 23, 24, 25,
26, 27, 28, 29, 30, 31

            APR
 M   T   W   TH  F   S   SS
                         1,
 2,  3,  4,  5,  6,  7,  8,
 9, 10, 11, 12, 13, 14, 15,
16, 17, 18, 19, 20, 21, 22,
23, 24, 25, 26, 27, 28, 29,
30

            May
 M   T   W   TH  F   S   SS
     1,  2,  3,  4,  5,  6,
 7,  8,  9, 10, 11, 12, 13,
14, 15, 16, 17, 18, 19, 20,
21, 22, 23, 24, 25, 26, 27,
28, 29, 30

*/
// 240 months in 20 years