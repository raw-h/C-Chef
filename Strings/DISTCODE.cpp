/*
Sergey recently learned about country codes - two letter strings, denoting countries. For example, BY stands for Belarus and IN stands for India. Mesmerized by this new discovery, Sergey now looks for country codes everywhere!

Sergey has recently found a string S consisting of uppercase Latin letters. He wants to find the number of different country codes that appear in S as contiguous substrings. For the purpose of this problem, consider that every 2-letter uppercase string is a valid country code.
*/
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
        int cnt = 0;
        string ans = "";
        set<string> st;
        for (int i = 0; i < s.size() - 1; i++)
        {
            ans = s[i];
            ans = ans + s[i + 1];
            st.insert(ans);
        }
        cout << st.size() << endl;
    }
    return 0;
}