/*
Kulyash believes in equality.
Given an integer NN, output a binary string of length NN such that:

The count of 0101 subsequences in the string is equal to the count of 1010 subsequences;
The string has at least one occurrence of 00 as well as 11.
If multiple such strings exist, print any. Also, it is guaranteed that corresponding to the given input, an answer always exists.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    cin >> s;
    while (s--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "1";
            for (int i = 1; i <= n - 2; i++)
                cout << "0";
            cout << "1";
        }
        else
        {
            cout << "0";
            for (int i = 1; i <= n - 2; i++)
                cout << "1";
            cout << "0";
        }

        cout << endl;
    }
    return 0;
}
