/*
Chef has 33 boxes of sizes AA, BB, and CC respectively. He puts the boxes in bags of size DD (A \leq B \leq C \leq DA≤B≤C≤D). Find the minimum number of bags Chef needs so that he can put each box in a bag. A bag can contain more than one box if the sum of sizes of boxes in the bag does not exceed the size of the bag.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a + b + c) <= d)
        {
            cout << "1" << endl;
        }
        else if ((a + b) <= d)
        {
            cout << '2' << endl;
        }
        else
        {
            cout << '3' << endl;
        }
    }
    return 0;
}