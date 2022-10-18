/*
A binary string is called alternating if no two adjacent characters of the string are equal. Formally, a binary string TT of length MM is called alternating if T_i \neq T_{i +1}T 
i
​
 =T 
i+1
​
  for each 1 \leq i \lt M1≤i<M.

For example, 0, 1, 01, 10, 101, 010, 1010 are alternating strings while 11, 001, 1110 are not.

You are given a binary string SS of length NN. You would like to rearrange the characters of SS such that the length of the longest alternating substring of SS is maximum. Find this maximum value.

A binary string is a string that consists of characters 0 and 1. A string aa is a substring of a string bb if aa can be obtained from bb by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, z, l;
        z = 0;
        l = 0;
        int i;
        cin >> n;
        string s;
        cin >> s;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                z++;
            }
            else if (s[i] == '1')
            {
                l++;
            }
        }
        int ans = min(l, z);
        if (l == z)
        {
            cout << 2 * ans << endl;
        }
        else
        {
            cout << 2 * ans + 1 << endl;
        }
    }
    return 0;
}
