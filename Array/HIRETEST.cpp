/*
A company conducted a coding test to hire candidates. NN candidates appeared for the test, and each of them faced MM problems. Each problem was either unsolved by a candidate (denoted by 'U'), solved partially (denoted by 'P'), or solved completely (denoted by 'F').

To pass the test, each candidate needs to either solve XX or more problems completely, or solve (X-1)(X−1) problems completely, and YY or more problems partially.

Given the above specifications as input, print a line containing NN integers. The i^{
    th}i 
th
  integer should be 11 if the i^{
    th}i 
th
  candidate has passed the test, else it should be 00.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int candidates, tests;
        cin >> candidates >> tests;
        int fully_solve, partially_solve;
        cin >> fully_solve >> partially_solve;
        string succ_rate[candidates];
        for (int i = 0; i < candidates; i++)
            cin >> succ_rate[i];
        for (int i = 0; i < candidates; i++)
        {
            int solved_fully = 0;
            int solved_partially = 0;
            bool flag = 0;
            for (int j = 0; j < tests; j++)
            {
                flag = 0;
                if (succ_rate[i][j] == 'F')
                    solved_fully++;
                else if (succ_rate[i][j] == 'P')
                    solved_partially++;
            }
            if ((solved_fully >= fully_solve) || ((solved_fully >= (fully_solve - 1)) && (solved_partially >= partially_solve)))
                flag = 1;
            if (flag)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}