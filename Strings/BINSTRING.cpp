/*
You are given a binary string SS of length NN.

You have to perform the following operation exactly once:

Select an index ii (1 \le i \leq N)(1≤i≤N) and delete S_iS
i
​
  from SS. The remaining parts of SS are concatenated in the same order.
How many distinct binary strings of length N-1N−1 can you get after applying this operation?
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                count++;
            }
        }
        cout << n - count << endl;
    }
    return 0;
}