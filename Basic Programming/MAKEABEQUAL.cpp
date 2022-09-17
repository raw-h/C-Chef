/*
Chef is given two arrays AA and BB of length NN each.

In one operation Chef can choose one element of AA and one element of BB and increase them by 11.

More formally: Chef can pick two integers i, ji,j (1\le i, j \le N)(1≤i,j≤N) and increment A_iA
i
​
  and B_jB
j
​
  by 11.

Determine the minimum number of operations required to make AA and BB equal.

Output -1−1 if it is not possible to make AA and BB equal.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll sum1 = 0;
        ll sum2 = 0;
        ll arr1[n], arr2[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr1[i];
            sum1 += arr1[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> arr2[i];
            sum2 += arr2[i];
        }
        if (sum1 == sum2)
        {
            ll ans = 0;
            for (ll i = 0; i < n; i++)
            {
                if (arr1[i] > arr2[i])
                    ans += arr1[i] - arr2[i];
            }
            cout << ans << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}