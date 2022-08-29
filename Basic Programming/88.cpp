/*
Bears love candies and games involving eating them. Limak and Bob play the following game. Limak eats 1 candy, then Bob eats 2 candies, then Limak eats 3 candies, then Bob eats 4 candies, and so on. Once someone can't eat what he is supposed to eat, he loses.

Limak can eat at most A candies in total (otherwise he would become sick), while Bob can eat at most B candies in total. Who will win the game? Print "Limak" or "Bob" accordingly.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int limak, bob, n1 = 1, n2;
        cin >> limak >> bob;
        bool flag1 = 0, flag2 = 0;
        for (int j = 0; j <= 1000; j++)
        {
            n2 = n1 + 1;
            if(bob < n2){
                flag2 = 1;
                break;
            }
            limak -= n1;
            bob -= n2;
            n1 = n1 + 2;
            if(limak < n1){
                flag1 = 1;
                break;
            }
        }
        if(flag1)
            cout << "Bob" << endl;
        else if(flag2)
            cout << "Limak" << endl;
    }
    return 0;
}
