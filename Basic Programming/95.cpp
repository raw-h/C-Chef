/*
Chef wants to buy a stock whose price was SS rupees when the market opened. He will buy the stock if and only if its price is in the range [A, B][A,B]. The price of the stock has changed by C\%C% by the time he was trying to buy the stock. Will he be able to buy the stock?
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float price, r_from, r_to, change;
        cin >> price >>r_from >> r_to >> change;
        float change_percentage = price * (change/100);
        price += change_percentage;
        if(price >= r_from && price <= r_to)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}