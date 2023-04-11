/*
A monster has H health points. Each time you hit it with a sword it loses X health points. However, the monster always gains Y health points right before every one of your hits.
The monster is considered defeated when the number of health points it has becomes zero or less than zero. You need to find if it is possible to defeat the monster.
*/
#include <iostream>
using namespace std;

// Read the range of numbers carefully, that's how I got it wrong the first time otherwise the logic was good.
// We can only defeat the monster if the deduction in health after every strike is greater than the recovery rate after every strike.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int health, cut, regain;
        cin >> health >> cut >> regain;
        if (cut > regain)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}