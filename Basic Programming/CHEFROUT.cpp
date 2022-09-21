/*
Chef's daily routine is very simple. He starts his day with cooking food, then he eats the food and finally proceeds for sleeping thus ending his day. Chef carries a robot as his personal assistant whose job is to log the activities of Chef at various instants during the day. Today it recorded activities that Chef was doing at N different instants. These instances are recorded in chronological order (in increasing order of time). This log is provided to you in form of a string s of length N, consisting of characters 'C', 'E' and 'S'. If s[i] = 'C', then it means that at the i-th instant Chef was cooking, 'E' denoting he was eating and 'S' means he was sleeping.

You have to tell whether the record log made by the robot could possibly be correct or not.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int count = 0;
        bool flag = 0;
        for (int i = 0; i < str.length() - 1; i++)
        {
            if (str[i] == 'C')
            {
                if ((str[i + 1] == 'C') || (str[i + 1] == 'E') || (str[i + 1] == 'S'))
                    count++;
            }
            else if (str[i] == 'E')
            {
                if ((str[i + 1] == 'E') || (str[i + 1] == 'S'))
                    count++;
                else
                    flag = 1;
            }
            else if (str[i] == 'S')
            {
                if (str[i + 1] == 'S')
                    count++;
                else
                    flag = 1;
            }
        }
        if ((count == (str.length() - 1)) && flag == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}