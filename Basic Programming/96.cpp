/*
When Chef was visiting a fair in Byteland, he met a magician. The magician had NN boxes (numbered 11 through NN) and a gold coin. He challenged Chef to play a game with him; if Chef won the game, he could have the coin, but if he lost, the magician would kidnap Chef.

At the beginning of the game, the magician places the gold coin into the XX-th box. Then, he performs SS swaps. To win, Chef needs to correctly identify the position of the coin after all swaps.

In each swap, the magician chooses two boxes AA and BB, moves the contents of box AA (before the swap) to box BB and the contents of box BB (before the swap) to box AA.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int boxes, coin_box, swaps;
        cin >> boxes >> coin_box >> swaps;
        int b1, b2;
        for (int j = 0; j < swaps; j++)
        {
            cin >> b1 >> b2;
            if(b1 == coin_box)
                coin_box = b2;
            else if(b2 == coin_box)
                coin_box = b1;
        }
        cout << coin_box << endl;
    }
    return 0;
}