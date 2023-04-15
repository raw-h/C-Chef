/*
You are given an integer
�
X. Find the smallest number
�
Y such that :

�
Y is greater than
�
X.
All digits of
�
Y are pairwise different.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x <= 9)
            cout << x + 1 << endl;
        else
        {
            bool flag = 1;
            while (flag)
            {
                flag = 0;
                x++;
                int orig_num = x;
                string p = to_string(x);
                int n = p.length();
                int temp[n];
                for (int i = 0; i < n; i++)
                {
                    temp[i] = orig_num % 10;
                    orig_num /= 10;
                }
                sort(temp, temp + n);
                for (int i = 0; i < n - 1; i++)
                {
                    if (temp[i] == temp[i + 1]){
                        flag = 1;
                        break;
                    }
                }
            }
            cout << x << endl;
        }
    }
    return 0;
}