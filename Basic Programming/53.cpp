/*
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If the quantity and price per item are input, write a program to calculate the total expenses.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int quantity, price;
        cin >> quantity >> price;
        if (quantity > 1000)
            cout << fixed << setprecision(6) << (quantity * price) - ((quantity * price)*0.1) << endl;
        
        else
            cout << fixed << setprecision(6) << quantity * price << endl;
    }
    return 0;
}
