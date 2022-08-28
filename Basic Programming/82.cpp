/*
A first-year student, came to your college. Being a good senior, you must tell him if it is possible to go from College Main Gate to Hostel for him.

The college can be visualized on a 2D-plane. Suppose the College Main Gate is situated at origin i.e. at the coordinates (0, 0)(0,0) and the Hostel is situated at the coordinates (x,y)(x,y).

As the first-year student wants to explore the college campus further, in one move, he will increase or decrease any coordinate (either the x-coordinate or the y-coordinate) by a value of exactly KK.

Is it possible for the first-year student to reach the Hostel?
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, K;
        cin >> x >> y >> K;
        if (x % K == 0 && y % K == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
