/*
Mathison recently inherited an ancient papyrus that contained some text. Unfortunately, the text was not a pangram. Now, Mathison has a particular liking for holoalphabetic strings and the text bothers him. The good news is that Mathison can buy letters from the local store in order to turn his text into a pangram.

However, each letter has a price and Mathison is not very rich. Can you help Mathison find the cheapest way to obtain a pangram?
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int alphas[27] = {0};
        int price[26];
        int total_price = 0;
        for (int j = 1; j <= 26; j++)
            cin >> price[j];
        string text;
        cin >> text;
        for (int j = 0; j < text.length(); j++)
            alphas[int(text[j]) - 96] = 1;

        for (int j = 1; j < 27; j++)
        {
            if(alphas[j] == 0)
                total_price += price[j];
        }
        cout << total_price << endl;
    }
    return 0;
}