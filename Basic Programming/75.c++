/*
Chef has obtained the results of a past Cook-Off. He wants to estimate the skill level of each contestant. The contestants can be classified with high probability (w.h.p.) based on the number of solved problems:

A contestant that solved exactly 0 problems is a beginner.
A contestant that solved exactly 1 problem is a junior developer.
A contestant that solved exactly 2 problems is a middle developer.
A contestant that solved exactly 3 problems is a senior developer.
A contestant that solved exactly 4 problems is a hacker.
A contestant that solved all five problems is Jeff Dean.
Please help Chef to identify the programming level of each participant.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        int sum = a1 + a2 + a3 + a4 + a5;
        if (sum == 0)
            cout << "Beginner\n";
        else if (sum == 1)
            cout << "Junior Developer\n";
        else if (sum == 2)
            cout << "Middle Developer\n";
        else if (sum == 3)
            cout << "Senior Developer\n";
        else if (sum == 4)
            cout << "Hacker\n";
        else
            cout << "Jeff Dean\n";
    }
    return 0;
}
