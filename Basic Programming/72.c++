/*
Chefland is holding a virtual marathon for the categories 1010 km, 2121 km and 4242 km having prizes A, B, CA,B,C (A \lt B \lt CA<B<C) respectively to promote physical fitness. In order to claim the prize in a particular category the person must cover the total distance for that category within DD days. Also a single person cannot apply in multiple categories.

Given the maximum distance dd km that Chef can cover in a single day, find the maximum prize that Chef can win at the end of DD days. If Chef can't win any prize, print 00.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int total_days, single_day_coverage, p1, p2, p3;
        cin >> total_days >> single_day_coverage >> p1 >> p2 >> p3;
        int run = total_days * single_day_coverage;
        if (run >= 10 && run < 21)
            cout << p1 << endl;
        else if (run >= 21 && run < 42)
            cout << p2 << endl;
        else if (run >= 42)
            cout << p3 << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
