/*
In a cricket game, an over is a set of six valid deliveries of balls performed by one player ― the bowler for this over.

Consider a cricket game with a series of NN overs (numbered 11 through NN) played by KK players (numbered 11 through KK). Each player may be the bowler for at most LL overs in total, but the same player may not be the bowler for any two consecutive overs. Assign exactly one bowler to each over in such a way that these rules are satisfied or determine that no such assignment exists.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int overs, players, atmost_overs;
        cin >> overs >> players >> atmost_overs;
        if (overs > (atmost_overs * players))
            cout << -1 << endl;
        else if(players == 1 && overs != 1)
            cout << -1 << endl;
        else
        {
            int i;
            int count = 0;
            while (atmost_overs--)
            {
                for (i = 1; i <= players; i++)
                {
                    if (count >= overs)
                        break;
                    cout << i << " ";
                    count++;
                }
            }
            cout << endl;
        }
    }
    return 0;
}