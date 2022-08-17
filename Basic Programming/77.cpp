/*
Chef has three spells. Their powers are AA, BB, and CC respectively. Initially, Chef has 00 hit points, and if he uses a spell with power PP, then his number of hit points increases by PP.

Before going to sleep, Chef wants to use exactly two spells out of these three. Find the maximum number of hit points Chef can have after using the spells.
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
        int z = a + b;
        int y = b + c;
        int x = a + c;
        int ans = max(z, max(y, x));
        cout << ans << endl;
    }
    return 0;
}
