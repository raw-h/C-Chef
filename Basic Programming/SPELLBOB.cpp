/*
Chef likes to play with cards a lot. Today, he's playing a game with three cards. Each card has a letter written on the top face and another (possibly identical) letter written on the bottom face. Chef can arbitrarily reorder the cards and/or flip any of the cards in any way he wishes (in particular, he can leave the cards as they were). He wants to do it in such a way that the letters on the top faces of the cards, read left to right, would spell out the name of his favorite friend Bob.
Determine whether it is possible for Chef to spell "bob" with these cards.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string top;
        string bottom;
        cin >> top;
        cin >> bottom;
        int c;
        int flag = 0;
        for (int i = 0; i < 3; i++)
        {
            if (top[i] == 'o' || bottom[i] == 'o')
            {
                c = 0;
                for (int j = 0; j < 3; j++)
                {
                    if (j != i)
                    {
                        if (top[j] == 'b' || bottom[j] == 'b')
                        {
                            c++;
                        }
                    }
                }
                if (c == 2)
                {
                    flag = 1;
                }
            }
        }
        if (flag == 1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
