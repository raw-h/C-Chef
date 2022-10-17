/*
You have a binary string SS of length NN. In one operation you can select a substring of SS and reverse it. For example, on reversing the substring S[2,4]S[2,4] for S=11000S=11000, we change 1 \textcolor{red}{100} 0 \rightarrow 1 \textcolor{red}{001} 011000→10010.

Find the minimum number of operations required to sort this binary string.
It can be proven that the string can always be sorted using the above operation finite number of times.
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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                for (int j = i; j < n; j++)
                {
                    if (s[j] == '0')
                    {
                        ans++;
                        break;
                    }
                    i++;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}