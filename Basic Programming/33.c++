/*
Team RCB has earned XX points in the games it has played so far in this year's IPL. To qualify for the playoffs they must earn at least a total of YY points. They currently have ZZ games left, in each game they earn 22 points for a win, 11 point for a draw, and no points for a loss.

Is it possible for RCB to qualify for the playoffs this year?
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int team_points, points_atleast, games_left;
        cin >> team_points >> points_atleast >> games_left;
        if ((team_points + (games_left * 2)) >= points_atleast)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
