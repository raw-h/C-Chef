/*
Suppose Chef is stuck on an island and currently he has xx units of food supply and yy units of water supply in total that he could collect from the island. He needs x_rx 
r
​
  units of food supply and y_ry 
r
​
  units of water supply per day at the minimal to have sufficient energy to build a boat from the woods and also to live for another day. Assuming it takes exactly DD days to build the boat and reach the shore, tell whether Chef has the sufficient amount of supplies to be able to reach the shore by building the boat?
  */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int curr_food, curr_water, daily_food, daily_water, days;
        cin >> curr_food >> curr_water >> daily_food >> daily_water >> days;
        float food = curr_food / daily_food;
        float water = curr_water / daily_water;
        float min_days = min(food, water);
        if (min_days >= days)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
