/*
A version control system(VCS) is a repository of files, often the files for the source code of computer programs, with monitored access. Every change made to the source is tracked, along with who made the change, why they made it, and references to problems fixed, or enhancements introduced, by the change.

Version control systems are essential for any form of distributed, collaborative development. Whether it is the history of a wiki page or large software development project, the ability to track each change as it was made, and to reverse changes when necessary can make all the difference between a well managed and controlled process and an uncontrolled ‘first come, first served’ system. It can also serve as a mechanism for due diligence for software projects.

In this problem we'll consider a simplified model of a development project. Let's suppose, that there are N source files in the project. All the source files are distinct and numbered from 1 to N.

A VCS, that is used for maintaining the project, contains two sequences of source files. The first sequence contains the source files, that are ignored by the VCS. If a source file is not in the first sequence, then it's considered to be unignored. The second sequence contains the source files, that are tracked by the VCS. If a source file is not in the second sequence, then it's considered to be untracked. A source file can either be or not be in any of these two sequences.

Your task  is to calculate two values: the number of source files of the project, that are both tracked and ignored, and the number of source files of the project, that are both untracked and unignored.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int rec[n] = {0}, temp, count1 = 0, count2 = 0;

        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            rec[(temp - 1)]++;
        }
        for (int i = 0; i < k; i++)
        {
            cin >> temp;
            rec[(temp - 1)]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (rec[i] == 2)
                count1++;
            else if (rec[i] == 0)
                count2++;
        }
        cout << count1 << " " << count2 << endl;
    }
    return 0;
}
