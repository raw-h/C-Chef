/*
According to the new tax scheme, a new tax called the binary string tax was introduced! JJ has a binary string SS of length NN. According to the tax scheme, for every occurrence of 0101 in SS, a tax of XX rupees will be charged, while for every occurrence of 1010 in SS, a tax of YY rupees will be charged.

For example, if X = 5X=5, Y = 7Y=7 and S = 11010S=11010, then SS has 11 occurrence of 0101 and 22 occurrences of 1010, so the tax charged = 5 \cdot 1 + 7 \cdot 2 = 19=5⋅1+7⋅2=19

JJ can rearrange the string SS in any way he wants. He wants to minimize the amount of tax he has to pay. Can you help him do so?
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        string tax_string;
        cin >> tax_string;
        int count0 = 0;
        int count1 = 0;
        for (int i = 0; i < tax_string.length(); i++)
        {
            if (tax_string[i] == '0')
                count0++;
            else
                count1++;
        }
        if((count0 == 0) || (count1 == 0))
            cout << '0' << endl;
        else{
            string rearranged_tax;
            if(x <= y){
                for(int i = 0; i < count0; i++)
                    rearranged_tax += '0';
                for(int i = 0; i < count1; i++)
                    rearranged_tax += '1';
                cout << x << endl;
            }
            else{
                for (int i = 0; i < count1; i++)
                    rearranged_tax += '1';
                for (int i = 0; i < count0; i++)
                    rearranged_tax += '0';
                cout << y << endl;
            }
        }
    }
    return 0;
}