/*
You have prepared four problems. The difficulty levels of the problems are A_1, A_2, A_3, A_4A 
1
​
 ,A 
2
​
 ,A 
3
​
 ,A 
4
​
  respectively. A problem set comprises at least two problems and no two problems in a problem set should have the same difficulty level. A problem can belong to at most one problem set. Find the maximum number of problem sets you can create using the four problems.
  */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> v(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if (v[0] == v[3])
        {
            cout << "0" << endl;
        }
        else if (v[0] == v[2] || v[1] == v[3])
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
    return 0;
}
