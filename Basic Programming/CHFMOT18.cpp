/*
In a country called Chef Land, there was a lot of monetary fraud, so Chefu, the head of the country, decided to choose new denominations of the local currency ― all even-valued coins up to an integer NN should exist. After a few days, a citizen complained that there was no way to create an odd value, so Chefu decided that he should also introduce coins with value 11. Formally, you are given an integer NN; for v = 1v=1 and each even positive integer v \le Nv≤N, coins with value vv exist.

You are also given an integer SS. To handle transactions quickly, find the minimum number of coins needed to pay a price SS.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, s;
        cin >> s >> n;
        long long coins = 0;
        while (true)
        {
            coins += s / n;
            s = s % n;
            if (s == 0)
                break;
            else if (s == 1 || s % 2 == 0)
            {
                coins += 1;
                break;
            }
            else
                n = s - 1;
        }
        cout << coins << endl;
    }
    return 0;
}