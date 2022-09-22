/*
Danya gave integers aa, bb and nn to Archi. Archi wants to compare a^na 
n
  and b^nb 
n
 . Help Archi with this task.
 */
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, n;
        cin >> a >> b >> n;
        if ((a == b) || (n % 2 == 0 && abs(a) == abs(b)))
        {
            cout << 0 << endl;
        }
        else
        {
            if (n % 2 == 0)
            {
                if (abs(a) > abs(b))
                {
                    cout << 1 << endl;
                }
                else
                {
                    cout << 2 << endl;
                }
            }
            if (n % 2 != 0)
            {
                if (a < b)
                {
                    cout << 2 << endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
        }
    }
    return 0;
}
