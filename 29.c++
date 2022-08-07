/*
Janmansh and Jay are playing a game. They start with a number XX and they play a total of YY moves. Janmansh plays the first move of the game, after which both the players make moves alternatingly.

In one move, a player can increment or decrement XX by 11.

If the final number after performing YY moves is even, then Janmansh wins otherwise, Jay wins. Determine the winner of the game if both the players play optimally.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int number, moves;
        cin >> number >> moves;
        if ((number + moves) % 2 == 0)
            cout << "Janmansh" << endl;
        else
            cout << "Jay" << endl;
    }
    return 0;
}
