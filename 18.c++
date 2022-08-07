/*
Chef is playing a videogame, and is getting close to the end. He decides to finish the rest of the game in a single session.

There are XX levels remaining in the game, and each level takes Chef YY minutes to complete. To protect against eye strain, Chef also decides that every time he completes 33 levels, he will take a ZZ minute break from playing. Note that there is no need to take this break if the game has been completed.

How much time (in minutes) will it take Chef to complete the game?
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int level_remaining, minute_per_level, break_minutes;
        cin >> level_remaining >> minute_per_level >> break_minutes;
        int time = 0;
        if (level_remaining <= 3)
        {
            time += (level_remaining * minute_per_level);
            cout << time << endl;
        }
        else
        {
            int breaks_taken;
            breaks_taken = int(level_remaining / 3);
            if ((level_remaining % 3) == 0)
                breaks_taken--;
            time += (level_remaining * minute_per_level);
            time += (breaks_taken * break_minutes);
            cout << time << endl;
        }
    }
    return 0;
}