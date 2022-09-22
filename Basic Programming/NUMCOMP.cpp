/*
Danya gave integers aa, bb and nn to Archi. Archi wants to compare a^na 
n
  and b^nb 
n
 . Help Archi with this task.
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        if (a == b)
            cout << 0 << endl;
        else
        {
            if (n & 1)
            {
                if (a > b)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
            else
            {
                if (abs(a) == abs(b))
                    cout << 0 << endl;
                else if (abs(a) > abs(b))
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
        }
    }
    return 0;
}
