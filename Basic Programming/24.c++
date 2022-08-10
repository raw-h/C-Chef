/*
Three numbers A, B and C are the inputs. Write a program to find second largest among them.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b)
        {
            if (b > c)
            {
                cout << b << endl;
                continue;
            }
            else
            {
                if (a > c)
                {
                    cout << c << endl;
                    continue;
                }
                else
                {
                    cout << a << endl;
                    continue;
                }
            }
        }
        else if (b > c)
        {
            if (a > c)
            {
                cout << a << endl;
                continue;
            }
            else
            {
                cout << c << endl;
                continue;
            }
        }
        else
        {
            cout << b << endl;
            continue;
        }
    }
    return 0;
}
