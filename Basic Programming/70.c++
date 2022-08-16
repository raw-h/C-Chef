/*
Chef has taken his first dose of vaccine DD days ago. He may take the second dose no less than LL days and no more than RR days since his first dose.

Determine if Chef is too early, too late, or in the correct range for taking his second dose.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int days_ago, min_days, max_days;
        cin >> days_ago >> min_days >> max_days;
        if (days_ago <= max_days && days_ago >= min_days)
            cout << "Take second dose now" << endl;
        else if (days_ago > max_days)
            cout << "Too Late" << endl;
        else if (days_ago < min_days)
            cout << "Too Early" << endl;
    }
    return 0;
}
