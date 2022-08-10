/*
Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        char z;
        cin >> z;
        if (z == 'B' || z == 'b')
            cout << "Battleship" << endl;
        else if (z == 'C' || z == 'c')
            cout << "Cruiser" << endl;
        else if (z == 'D' || z == 'd')
            cout << "Destroyer" << endl;
        else if (z == 'F' || z == 'f')
            cout << "Frigate" << endl;
    }
    return 0;
}
