/*
Ezio can manipulate at most XX number of guards with the apple of eden.

Given that there are YY number of guards, predict if he can safely manipulate all of them.
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x < y)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
    }
    return 0;
}
