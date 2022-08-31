#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int b_lkd, a_lkd, grow_from, grow_to, months, increase;
        cin >> b_lkd >> a_lkd >> grow_from >> grow_to >> months;
        increase = (a_lkd - b_lkd);
        if (increase >= (grow_from * months) && increase <= (grow_to * months))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}