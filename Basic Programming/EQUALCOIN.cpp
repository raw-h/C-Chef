/*
Chef has XX coins worth 11 rupee each and YY coins worth 22 rupees each. He wants to distribute all of these X+YX+Y coins to his two sons so that the total value of coins received by each of them is the same. Find out whether Chef will be able to do so.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int one_rupees = x * 1;
        int two_rupees = y * 2;
        if (((two_rupees + one_rupees) % 2 == 0) && ((x > 0) || (y % 2 == 0)))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}