/*
Rachel has a date and tells everyone she is not mad at Ross but doesn't have any feelings for him anymore either. Seeing her date for the first time, everyone notices that he looks exactly like Ross. However, Rachel refuses to believe so.

Rachel makes a list of NN characteristics and assigns a score to both Ross and Russ for each of the characteristics. Ross' i^{th}i 
th
  characteristic has a score equal to A_iA 
i
​
  and Russ' i^{th}i 
th
  characteristic has a score equal to B_iB 
i
​
 . Rachel decides that Russ looks exactly like Ross if the following condition is satisfied for at least XX distinct values of jj, 1 \leq j \leq N1≤j≤N :

|A_j - B_j| \leq K∣A 
j
​
 −B 
j
​
 ∣≤K.
Help Rachel in finding if both are alike.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int Ross[n], Russ[n];
        for (int i = 0; i < n; i++)
        {
            cin >> Ross[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> Russ[i];
        }
        int  count = 0;
        for (int i = 0; i < n; i++)
        {
            if(abs(Ross[i] - Russ[i]) <= k)
                count++;
        }
        if(count >= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}