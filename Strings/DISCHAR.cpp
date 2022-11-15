/*
You have initially a string of N characters, denoted by A1,A2...AN. You have to print the size of the largest subsequence of string A such that all the characters in that subsequence are distinct ie. no two characters in that subsequence should be same.
A subsequence of string A is a sequence that can be derived from A by deleting some elements and without changing the order of the remaining elements.
*/
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
        }
        cout << st.size() << endl;
    }
    return 0;
}
