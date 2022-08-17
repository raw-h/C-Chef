/*
In a season, each player has three statistics: runs, wickets, and catches. Given the season stats of two players AA and BB, denoted by RR, WW, and CC respectively, the person who is better than the other in the most statistics is regarded as the better overall player. Tell who is better amongst AA and BB. It is known that in each statistic, the players have different values.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int r1, w1, c1;
        cin >> r1 >> w1 >> c1;
        int r2, w2, c2;
        cin >> r2 >> w2 >> c2;
        int player1 = 0;
        int player2 = 0;
        if (max(r1, r2) == r1)
            player1++;
        else
            player2++;
        if (max(w1, w2) == w1)
            player1++;
        else
            player2++;
        if (max(c1, c2) == c1)
            player1++;
        else
            player2++;
        if (player1 > player2)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}
