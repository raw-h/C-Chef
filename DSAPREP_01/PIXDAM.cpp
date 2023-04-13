/*
You are given a rectangle with dimensions
�
×
�
H×W, where
�
H and
�
W are positive integers representing the vertical and horizontal dimensions of the rectangle respectively. You are also given a point
�
P which is at distance
�
X from the rectangle's left edge and at distance
�
Y from the rectangle's top edge.

Find whether the distance from the point
�
P to the bottom right corner of the rectangle is strictly less than
�
K.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long height, width, p_left_x, p_top_y, comparision;
        cin >> height >> width >> p_left_x >> p_top_y >> comparision;
        long long x = pow((width - p_left_x),2);
        long long y = pow((height - p_top_y),2);
        long long dist = sqrt(x + y);
        if(dist < comparision)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}