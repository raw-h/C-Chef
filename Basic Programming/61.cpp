/*
Utkarsh is currently sitting for placements. He has applied to three companies named A, BA,B, and CC.

You know Utkarsh's order of preference among these 33 companies, given to you as characters first, second, and third respectively (where first is the company he prefers most).

You also know that Utkarsh has received offers from exactly two of these three companies, given you as characters xx and yy.

Utkarsh will always accept the offer from whichever company is highest on his preference list. Which company will he join?
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        char first, second, third;
        cin >> first >> second >> third;
        char offer_1, offer_2;
        cin >> offer_1 >> offer_2;
        if (offer_1 == first)
            cout << offer_1 << endl;
        else if (offer_2 == first)
            cout << offer_2 << endl;
        else if (offer_1 == second)
            cout << offer_1 << endl;
        else if (offer_2 == second)
            cout << offer_2 << endl;
        else if (offer_1 == third)
            cout << offer_1 << endl;
        else if (offer_2 == third)
            cout << offer_2 << endl;
    }
    return 0;
}
