/*
Chef and his friend is standing on the X-axis at the points X_1X 
1
​
  and X_2X 
2
​
  respectively.

Chef moves one step forward each second (that is he moves to X_1 + 1X 
1
​
 +1 after the 1^{st}1 
st
  second, X_1 + 2X 
1
​
 +2 after the 2^{nd}2 
nd
  second, and so on), whereas his friend moves 22 steps forward each second (that is he moves to X_2 + 2X 
2
​
 +2 after the 1^{st}1 
st
  second, X_2 + 4X 
2
​
 +4 after the 2^{nd}2 
nd
  second, and so on).

You need to determine if Chef will be able to meet his friend or not. You can assume that Chef and his friend both keep on moving for a long indefinite amount of time and also that they move simultaneously.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x1, x2;
        cin >> x1 >> x2;
        if(x1 == x2 || x1 > x2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}