/*
Nitin and Sobhagya were playing a game with coins. If Sobhagya has more coins then he is winning, otherwise Nitin is winning. Note that this means if both Nitin and Sobhagya have the same number of coins, then Nitin is winning.

Initially Nitin has AA coins while Sobhagya has BB coins. Then Ritik came and gave his CC coins to the player who is not winning currently, after which Satyarth came and repeated the same process (gave his DD coins to the player who is not winning currently).

Find the final winner of the game.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int nitin, sobhagya, ritik, satyarth;
        cin >> nitin >> sobhagya >> ritik >> satyarth;
        if (nitin < sobhagya)
            nitin += ritik;
        else
            sobhagya += ritik;
        if (nitin < sobhagya)
            nitin += satyarth;
        else
            sobhagya += satyarth;
        if (nitin >= sobhagya)
            cout << "N" << endl;
        else
            cout << "S" << endl;
    }
    return 0;
}
