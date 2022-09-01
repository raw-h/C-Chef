/*
In a New York City coffee house called Central Perk, we're introduced to six friends: chef Monica Geller, data controller Chandler Bing who lives across the hall from Monica, Chandler's roommate/actor Joey Tribbiani, Monica's brother Ross Geller, new ageist Phoebe Buffay, and "born to be a wife" Rachel Green.

Chef wants to divide NN cookies between the six friends such that:

Each friend gets at least one cookie.
No two friends get the same number of cookies.
Find if it is possible for Chef to do so.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if (n < 21)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
