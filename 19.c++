/*
The Chessboard Distance for any two points (X1,Y1) and (X2,Y2) on a Cartesian plane is defined as max(|X_1 - X_2|, |Y_1 - Y_2|).
You are given two points (X1,Y1) and (X2,Y2). Output their Chessboard Distance.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int dist;
        int x_dist = abs(x1 - x2);
        int y_dist = abs(y1 - y2);
        dist = max(x_dist, y_dist);
        cout << dist << endl;
    }
    return 0;
}