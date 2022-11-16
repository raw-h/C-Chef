/*
Chef has a string AA (containing lowercase Latin letters only) of length NN where NN is even. He can perform the following operation any number of times:

Swap A_iA 
i
​
  and A_{i + 2}A 
i+2
​
  for any 1 \le i \le (N - 2)1≤i≤(N−2)
Determine if Chef can convert string AA to a palindromic string.

Note: A string is called a palindrome if it reads the same backwards and forwards. For example, \texttt{noon}noon and \texttt{level}level are palindromic strings but \texttt{ebb}ebb is not.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n + 1];
        cin >> s;

        int odd[26] = {0}, even[26] = {0}, i;
        for (i = 0; s[i] != '\0'; i++)
        {
            if (i % 2 == 1)
            {
                odd[s[i] - 97]++;
            }
            else
            {
                even[s[i] - 97]++;
            }
        }

        int flag = 1;
        for (i = 0; i < 26; i++)
        {
            if (odd[i] != even[i])
            {
                flag = 0;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
