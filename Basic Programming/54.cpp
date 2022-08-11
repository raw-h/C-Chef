/*
Chef is planning to buy a new car for his birthday. After a long search, he is left with 22 choices:

Car 1: Runs on diesel with a fuel economy of x_1x 
1
​
  km/l
Car 2: Runs on petrol with a fuel economy of x_2x 
2
​
  km/l
Chef also knows that

the current price of diesel is y_1y 
1
​
  rupees per litre
the current price of petrol is y_2y 
2
​
  rupees per litre
Assuming that both cars cost the same and that the price of fuel remains constant, which car will minimize Chef's expenses?

Print your answer as a single integer in the following format

If it is better to choose Car 1, print -1−1
If both the cars will result in the same expenses, print 00
If it is better to choose Car 2, print 11
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float eco_c1, eco_c2, diesel, petrol;
        cin >> eco_c1 >> eco_c2 >> diesel >> petrol;
        float c1_cost = diesel / eco_c1;
        float c2_cost = petrol / eco_c2;
        if (c1_cost == c2_cost)
            cout << "0" << endl;
        else if (c1_cost < c2_cost)
            cout << "-1" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}
