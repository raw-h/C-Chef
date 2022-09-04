/*
You are given four integers a, b, c and d. Determine if there's a rectangle such that the lengths of its sides are a, b, c and d (in any order).
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b && c == d || a == c && b == d || a == d && b == c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}