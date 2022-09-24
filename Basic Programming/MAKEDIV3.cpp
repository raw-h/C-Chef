/*
Given an integer NN, help Chef in finding an NN-digit \textbf{odd positive integer}odd positive integer XX such that XX is divisible by 33 but not by 99.

\textbf{Note}:Note: There should not be any leading zeroes in XX. In other words, 003003 is not a valid 33-digit odd positive integer.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 1)
            cout << 3 << endl;
        else
        {
            for (ll i = 1; i <= n; i++)
            {
                if (i == 1)
                    cout << 1;
                else if (i == n)
                    cout << 5;
                else
                    cout << 0;
            }
            cout << endl;
        }
    }
    return 0;
}