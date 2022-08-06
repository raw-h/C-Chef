/*
The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input / Output warning.
You are expected to be able to process at least 2.5MB of input data per second at runtime.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t % k == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}