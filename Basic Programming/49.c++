/*
Vacations have arrived and Chef wants to go to his home in ChefLand. There are two types of routes he can take:

Take a flight from his college to ChefArina which takes XX minutes and then take a bus from ChefArina to ChefLand which takes YY minutes.
Take a direct train from his college to ChefLand which takes ZZ minutes.
Which of these two options is faster?
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int flight, bus, train;
        cin >> flight >> bus >> train;
        if ((flight + bus) == train)
            cout << "EQUAL" << endl;
        else if ((flight + bus) < train)
            cout << "PLANEBUS" << endl;
        else
            cout << "TRAIN" << endl;
    }
    return 0;
}
