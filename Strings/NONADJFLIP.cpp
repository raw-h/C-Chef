/*
You are given a binary string SS of length NN. You can perform the following operation on SS:

Pick any set of indices such that no two picked indices are adjacent.
Flip the values at the picked indices (i.e. change 00 to 11 and 11 to 00).
For example, consider the string S = 1101101S=1101101.
If we pick the indices \{1,3,6\}{1,3,6}, then after flipping the values at picked indices, we will get \underline{1}1\underline{0}11\underline{0}1 \rightarrow 0111111 
1
​
 1 
0
​
 11 
0
​
 1→0111111.
Note that we cannot pick the set \{2,3,5\}{2,3,5} since 22 and 33 are adjacent indices.

Find the minimum number of operations required to convert all the characters of SS to 00.
*/
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = 0;
        int x = 0;
        for (long long i = 0; i < n; i++)
        {
            if (s[i] != '0')
            {
                x = 1;
                break;
            }
        }
        if (x == 0)
        {
            cout << 0 << endl;
            continue;
        }
        for (long long i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i] == s[i + 1])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
