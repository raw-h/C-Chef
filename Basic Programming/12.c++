/*
Chef is watching a football match. The current score is A:BA:B, that is, team 11 has scored AA goals and team 22 has scored BB goals. Chef wonders if it is possible for the score to become C:DC:D at a later point in the game (i.e. team 11 has scored CC goals and team 22 has scored DD goals). Can you help Chef by answering his question?
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int c, d;
        cin >> c >> d;
        if ((c >= a) && (d >= b))
        {
            cout << "POSSIBLE" << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}