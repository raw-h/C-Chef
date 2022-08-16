/*
To address the situation of Water Scarcity in Chefland, Chef has started an awareness campaign to motivate people to use greywater for toilets, washing cars, gardening, and many other chores which don't require the use of freshwater. These activities presently consume yy liters of water every week per household and Chef thinks through this campaign he can help cut down the total usage to \lfloor \frac{y}{2} \rfloor⌊ 
2
y
​
 ⌋.

Assuming xx liters of water every week per household is consumed at chores where using freshwater is mandatory and a total of CC liters of water is available for the entire Chefland having HH households for a week, find whether all the households can now have sufficient water to meet their requirements.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int houses, fresh_chores, grey_chores, total_water;
        cin >> houses >> fresh_chores >> grey_chores >> total_water;
        int water_used = 0;
        grey_chores = grey_chores / 2;
        water_used = fresh_chores + grey_chores;
        if ((houses * water_used) <= total_water)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
