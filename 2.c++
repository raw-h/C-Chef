/*
Chef is watching TV. The current volume of the TV is XX. Pressing the volume up button of the TV remote increases the volume by 11 while pressing the volume down button decreases the volume by 11. Chef wants to change the volume from XX to YY. Find the minimum number of button presses required to do so.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        int ans = x - y;
        cout << abs(ans) << endl;
    }
    return 0;
}
