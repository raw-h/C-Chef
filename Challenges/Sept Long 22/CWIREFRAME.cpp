/*
Chef has a rectangular plate of length N cmNcm and width M cmMcm. He wants to make a wireframe around the plate. The wireframe costs XX rupees per cm.

Determine the cost Chef needs to incur to buy the wireframe.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;
        int perimeter = 2 * (n + m);
        int cost = perimeter * x;
        cout << cost << endl;
    }
    return 0;
}