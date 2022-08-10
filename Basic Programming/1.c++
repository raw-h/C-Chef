/*
Chef has to travel to another place. For this, he can avail any one of two cab services.

The first cab service charges XX rupees.
The second cab service charges YY rupees.
Chef wants to spend the minimum amount of money. Which cab service should Chef take?
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            cout << "SECOND" << endl;
        }
        else if (x == y)
        {
            cout << "ANY" << endl;
        }
        else
            cout << "FIRST" << endl;
    }
    return 0;
}