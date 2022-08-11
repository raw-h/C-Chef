/*
Faizal is very sad after finding out that he is responsible for Sardar's death. He tries to drown his sorrows in alcohol and gets very drunk. Now he wants to return home but is unable to walk straight. For every 33 steps forward, he ends up walking one step backward.

Formally, in the 1^{st}1 
st
  second he moves 33 steps forward, in the 2^{nd}2 
nd
  second he moves 11 step backwards, in the 3^{rd}3 
rd
  second he moves 33 steps forward, in 4^{th}4 
th
  second 11 step backwards, and so on.

How far from his initial position will Faizal be after kk seconds have passed? Assume that Faizal's initial position is 00.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k;
        cin >> k;
        if(k % 2 == 0)
            cout << k << endl;
        else
            cout << k + 2 << endl;
    }

    return 0;
}
