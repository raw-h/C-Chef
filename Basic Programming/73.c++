/*
You are given a standard 8 \times 88×8 chessboard which has exactly 22 rooks on it and no other pieces. The rows are numbered 11 to 88 from bottom to top, and the columns are numbered 11 to 88 from left to right. The cell at the intersection of the ii-th column and jj-th row is denoted (i,j)(i,j).

Given the initial positions of the rooks in the form of coordinates (X_1,Y_1)(X 
1
​
 ,Y 
1
​
 ) and (X_2,Y_2)(X 
2
​
 ,Y 
2
​
 ), you need to tell whether the 22 rooks currently attack each other or not. Assume, each square can contain at most one piece.

Rooks can only travel in straight lines along the row or column they are placed at, and can't jump over other pieces
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int r1_x, r1_y, r2_x, r2_y;
        cin >> r1_x >> r1_y >> r2_x >> r2_y;
        if ((r1_x == r2_x) || (r1_y == r2_y))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
