/*
Chef's favorite game is chess. Today, he invented a new piece and wants to see its strengths.

From a cell (X, Y)(X,Y), the new piece can move to any cell of the chessboard such that its color is different from that of (X, Y)(X,Y).

The new piece is currently located at cell (A, B)(A,B). Chef wants to calculate the minimum number of steps required to move it to (P, Q)(P,Q).

Note: A chessboard is an 8 \times 88×8 square board, where the cell at the intersection of the ii-th row and jj-th column is denoted (i, j)(i,j). Cell (i, j)(i,j) is colored white if i+ji+j is even and black if i+ji+j is odd.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        int x = (a + b) % 2;
        int y = (p + q) % 2;
        if (a == p && b == q){
            cout << 0 << endl;
            continue;
        }
        else if (x == y){
            cout << 2 << endl;
            continue;
        }
        else{
            cout << 1 << endl;
            continue;
        }
    }
    return 0;
}