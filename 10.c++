/*
Chef has finally got the chance of his lifetime to drive in the F1F1 tournament. But, there is one problem. Chef did not know about the 107% rule and now he is worried whether he will be allowed to race in the main event or not.

Given the fastest finish time as XX seconds and Chef's finish time as YY seconds, determine whether Chef will be allowed to race in the main event or not.

Note that, Chef will only be allowed to race if his finish time is within 107% of the fastest finish time.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float x, y;
        cin >> x >> y;
        float a = x + (0.07 * x);
        if (y <= a)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}
