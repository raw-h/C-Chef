/*
After a very long time, the Chef has a vacation. Chef has planned for two trips during this vacation - one with his family and the other with his friends. The family trip will take XX days and the trip with friends will take YY days. Currently, the dates are not decided but the vacation will last only for ZZ days.

Chef can be in at most one trip at any time and once a trip is started, Chef must complete it before the vacation ends. Will Chef be able to go on both these trips if he chooses the dates optimally?
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y <= z)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
