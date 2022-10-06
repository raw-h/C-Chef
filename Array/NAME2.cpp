/*
In an attempt to control the rise in population, Archer was asked to come up with a plan. This time he is targeting marriages. Archer, being as intelligent as he is, came up with the following plan:

A man with name M is allowed to marry a woman with name W, only if M is a subsequence of W or W is a subsequence of M.

A is said to be a subsequence of B, if A can be obtained by deleting some elements of B without changing the order of the remaining elements.

Your task is to determine whether a couple is allowed to marry or not, according to Archer's rule.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string name1, name2;
        cin >> name1 >> name2;
        if (name1.length() == name2.length())
        {
            bool flag1 = 1;
            for (int i = 0; i < name1.length(); i++)
            {
                if (name1[i] != name2[i])
                    flag1 = 0;
            }
            if (flag1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (name1.length() != name2.length())
        {
            bool flag = 0;
            int max_string = max(name1.length(), name2.length());
            int name1_iterator = 0;
            int name2_iterator = 0;
            int count = 0;
            while (max_string--)
            {
                if (name1[name1_iterator] == name2[name2_iterator])
                {
                    name1_iterator++;
                    name2_iterator++;
                    flag = 1;
                    count++;
                }
                else if (name1[name1_iterator] != name2[name2_iterator])
                {
                    if (name1.length() < name2.length())
                        name2_iterator++;
                    else
                        name1_iterator++;
                }
            }
            if (flag && count == min(name1.length(), name2.length()))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}