/*
Chef is a very lazy person. Whatever work is supposed to be finished in xx units of time, he finishes it in m * xm∗x units of time. But there is always a limit to laziness, so he delays the work by at max dd units of time. Given x, m, dx,m,d, find the maximum time taken by Chef to complete the work.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int x, m, d;
        cin >> x >> m >> d;
        int min_time;
        min_time = min((x * m), (x + d));
        cout << min_time << endl;
    }
    return 0;
}
