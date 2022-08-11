/*
Chef is currently facing the north direction. Each second he rotates exactly 9090 degrees in clockwise direction. Find the direction in which Chef is facing after exactly XX seconds.

\textbf{Note}:Note: There are only 4 directions: North, East, South, West (in clockwise order).
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        if (x % 4 == 0)
            cout << "North" << endl;
        else if (x % 4 == 1)
            cout << "East" << endl;
        else if (x % 4 == 2)
            cout << "South" << endl;
        else
            cout << "West" << endl;
    }
    return 0;
}
