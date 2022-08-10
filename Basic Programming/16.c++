/*
Chef has NN empty bottles where each bottle has a capacity of XX litres.
There is a water tank in Chefland having KK litres of water. Chef wants to fill the empty bottles using the water in the tank.

Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely.
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int ans = 0;
        int no_of_bottles, capacity_of_bottle, total_water;
        cin >> no_of_bottles >> capacity_of_bottle >> total_water;
        if (total_water < capacity_of_bottle)
        {
            cout << "0" << endl;
        }
        else if (total_water == capacity_of_bottle)
        {
            cout << "1" << endl;
        }
        else
        {
            ans += (total_water / capacity_of_bottle);
            if (ans > no_of_bottles)
            {
                cout << no_of_bottles << endl;
            }
            else
                cout << ans << endl;
        }
    }
    return 0;
}
