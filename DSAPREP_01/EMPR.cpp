/*
You are given
�
T testcases , each testcase consists of 3 numbers ,
�
P,
�
X,
�
Y,
�
Z.
You have a best friend named Rahul.
�
Z is
1
1 if you will meet Rahul and
0
0 otherwise. You initially has an Emotional Proximity of
�
P, which increases by
�
%
Y% if you meet Rahul and decreases by
�
%
X% otherwise. You have to print the final Emotional Proximity.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double proximity, decrease_p, increase_p;
        int meets_or_not;
        cin >> proximity >> decrease_p >> increase_p >> meets_or_not;
        if (meets_or_not == 1)
        {
            proximity += ((increase_p / 100.0) * proximity);
        }
        else
            proximity -= ((decrease_p / 100.0) * proximity);
        cout << fixed << setprecision(10) << proximity << endl;
    }
    return 0;
}
