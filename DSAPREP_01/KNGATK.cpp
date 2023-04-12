/*
Nightking wants to attack the kingdom and he really likes cold days. However, he doesn’t want to attack the kingdom on the coldest day, because it is obvious.
Instead, he will attack the second coldest day. Given an array A of N distinct integers where A[i] represents the temperature forecast of the i-th day, You need to find the temperature of the day of the attack.
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
        int min_temp = INT_MAX;
        vector<int> temps;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            temps.push_back(x);
            min_temp = min(min_temp, x);
        }
        for (int i = 0; i < n; i++)
        {
            if (temps[i] == min_temp)
                temps[i] = INT_MAX;
        }
        min_temp = INT_MAX;
        for (auto it : temps)
            min_temp = min(it, min_temp);
        cout << min_temp << endl;
    }
    return 0;
}
