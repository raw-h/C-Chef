/*
In Uttu's college, a semester is said to be a:

Overload semester if the number of credits taken \gt 65>65.
Underload semester if the number of credits taken \lt 35<35.
Normal semester otherwise
Given the number of credits XX taken by Uttu, determine whether the semester is Overload, Underload or Normal.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int credits;
        cin >> credits;
        if (credits > 65)
            cout << "Overload" << endl;
        else if (credits < 35)
            cout << "Underload" << endl;
        else
            cout << "Normal" << endl;
    }
    return 0;
}