/*
Chef has 33 bags that she wants to take on a flight. They weigh AA, BB, and CC kgs respectively. She wants to check-in exactly two of these bags and carry the remaining one bag with her.

The airline restrictions says that the total sum of the weights of the bags that are checked-in cannot exceed DD kgs and the weight of the bag which is carried cannot exceed EE kgs. Find if Chef can take all the three bags on the flight.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;
        bool flag = 0;
        if (a <= e && (b + c) <= d)
        {
            flag = 1;
        }
        else if (b <= e && (a + c) <= d)
        {
            flag = 1;
        }
        else if (c <= e && (b + a) <= d)
        {
            flag = 1;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
