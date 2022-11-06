/*
Chef just had a big argument with his best friend. He is quite upset and doesn't want anything to remind him of his pal.

Chef has to construct a binary string SS of length NN. He would like it to be as far from a palindrome as possible, and so he would like SS to satisfy the following condition:

Let TT be the reverse of SS. Then, S_i \neq T_iS 
i
​
 =T 
i
​
  for every 1 \leq i \leq N1≤i≤N.
Can you help Chef construct SS? If there are multiple possible strings that satisfy Chef's condition, you may print any of them.

Note 1: A string SS is said to be a binary string if every character of SS is either '0' or '1'.

Note 2: Let SS be a string of length NN. String TT is said to be its reverse if T_i = S_{N+1-i}T 
i
​
 =S 
N+1−i
​
  for every 1 \leq i \leq N1≤i≤N. For example, the reverse of 1001010010 is 0100101001 and the reverse of 01100110 is 01100110.
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

        if (n & 1)
        {
            cout << -1 << endl;
        }
        else
        {
            string s = "";
            for (int i = 0; i < n / 2; i++)
            {
                s += '0';
            }
            for (int i = n / 2; i < n; i++)
            {
                s += '1';
            }
            cout << s << endl;
        }
    }
    return 0;
}
