/*
Andrew likes meatballs very much.

He has N plates of meatballs, here the ith plate contains Pi meatballs. You need to find the minimal number of plates Andrew needs to take to his trip to Las Vegas, if he wants to eat there at least M meatballs. Note that each plate is already packed, i.e. he cannot change the amount of meatballs on any plate.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        long long int s = 0;
        long long int d = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            s = s + a[i];
            d++;
            if (s >= m)
            {
                break;
            }
        }
        if (s < m)
            cout << "-1" << endl;
        else
            cout << d << endl;
    }
    return 0;
}
