/*
As a health expert, Vinay is keeping a close watch on the ongoing pandemic of coronavirus disease (COVID-19). He thought of a different situation where there are 2626 types of viruses, named "aorona", "borona", "corona", ..., "zorona".

You are given a string SS with length NN. There are NN people (numbered 11 through NN) and for each valid ii, the ii-th person is infected by exactly one type of virus named S_iS 
i
​
 orona (i.e. "corona" with the first letter replaced by the ii-th character of SS).

You should answer QQ queries. In each query:

You are given an integer CC denoting the number of available isolation centers.
Each isolation center has an infinite capacity, but with the restriction that two people infected with the same type of virus cannot stay in the same isolation center.
There is also a pending queue with an infinite capacity and there are no restrictions on which people can be in the pending queue.
Initially, the isolation centers and pending queue are empty.
Each of the NN people should be placed in either the pending queue or one of the isolation centers.
Since Vinay is busy finding a vaccine, he asks Swapnil to find a way to place the people in the pending queue and isolation centers such that the number of people in the pending queue is the smallest possible.
Help Swapnil find the size of the pending queue in that case.
*/
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        long long int a[26];
        for (int i = 0; i < 26; i++)
        {
            a[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            int y = s[i] - 'a';
            a[y]++;
        }

        while (q--)
        {
            long long int m;
            cin >> m;
            long long int ans = 0;
            for (int i = 0; i < 26; i++)
            {
                if (a[i] >= m)
                {
                    ans = ans + a[i] - m;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
