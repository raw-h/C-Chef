/*
Chef is working on his swap-based sorting algorithm for strings.

Given a string SS of length NN, he wants to know whether he can sort the string using his algorithm.

According to the algorithm, one can perform the following operation on string SS any number of times:

Choose some index ii (1 \leq i \leq N)(1≤i≤N) and swap the i^{th}i 
th
  character from the front and the i^{th}i 
th
  character from the back.
More formally, choose an index ii and swap S_iS 
i
​
  and S_{(N+1-i)}S 
(N+1−i)
​
 .
For example, \underline{\texttt{d}} \texttt{cb} \underline{\texttt{a}} 
d
​
 cb 
a
​
  can be converted to \underline{\texttt{a}} \texttt{cb} \underline{\texttt{d}} 
a
​
 cb 
d
​
  using one operation where i = 1i=1.

Help Chef find if it is possible to sort the string using any (possibly zero) number of operations.
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
        string str;
        cin >> str;
        for (int i = 0; i < (str.length() / 2); i++)
        {
            if (int(str[i]) > int(str[n - i - 1]))
                swap(str[i],str[n - 1 -i]);
        }
        bool flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (int(str[i]) > int(str[i + 1]))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}