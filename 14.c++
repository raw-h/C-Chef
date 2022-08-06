/*
In discus throw, a player is given 33 throws and the throw with the longest distance is regarded as their final score.

You are given the distances for all 33 throws of a player. Determine the final score of the player.
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
        int temp = max(a, b);
        int ans = max(temp, c);
        cout << ans << endl;
    }
    return 0;
}