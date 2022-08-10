/*
Chef's phone shows a Battery Low notification if the battery level is 15 \%15% or less.

Given that the battery level of Chef's phone is X \%X%, determine whether it would show a Battery low notification.
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int batt;
        cin >> batt;
        if (batt <= 15)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}