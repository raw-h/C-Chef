/*
Chef and Chefina are competing against each other in a programming contest. They were both able to solve all the problems in the contest, so the winner between them must be decided by time penalty. Chef solved all the problems in XX minutes and made PP wrong submissions, while Chefina solved all the problems in YY minutes and made QQ wrong submissions. Who won the competition (or was it a draw)?

Note: The time penalty is calculated as follows:

The base time penalty is the time at which the final problem was solved (so, XX for Chef and YY for Chefina)
Each wrong submission adds a penalty of 1010 minutes
The winner is the person with less penalty time. If they both have the same penalty, it is considered a draw.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int chef, chefina, chef_wrong, chefina_wrong;
        cin >> chef >> chefina >> chef_wrong >> chefina_wrong;
        if ((chef + (chef_wrong * 10)) == chefina + (chefina_wrong * 10))
            cout << "Draw" << endl;
        else if ((chef + (chef_wrong * 10)) < chefina + (chefina_wrong * 10))
            cout << "Chef" << endl;
        else
            cout << "Chefina" << endl;
    }
    return 0;
}
