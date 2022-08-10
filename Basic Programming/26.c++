/*
The National Championships are starting soon. There are 44 race categories, numbered from 11 to 44, that Chef is interested in. Chef is participating in exactly 22 of these categories.

Chef has an arch-rival who is, unfortunately, the only person participating who is better than Chef, i.e, Chef can't defeat the arch-rival in any of the four race categories but can defeat anyone else. Chef's arch-rival is also participating in exactly 22 of the four categories.

Chef hopes to not fall into the same categories as that of the arch-rival.

Given X, Y, A, BX,Y,A,B where X, YX,Y are the races that Chef participates in, and A, BA,B are the races that Chef's arch-rival participates in, find the maximum number of gold medals (first place) that Chef can win.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int chef_r1, chef_r2, riv_r1, riv_r2;
        cin >> chef_r1 >> chef_r2 >> riv_r1 >> riv_r2;
        int win = 2;
        if (chef_r1 == riv_r1 || chef_r1 == riv_r2)
            win--;
        if (chef_r2 == riv_r1 || chef_r2 == riv_r2)
            win--;
        cout << win << endl;
    }
    return 0;
}
