/*
Chef opted for Bio-Statistics as an Open-Elective course in his university, but soon got bored, and decided to text his friends during lectures. The instructor caught Chef, and decided to punish him, by giving him a special assignment.

There are NN numbers in a list A = A_1, A_2, \ldots, A_NA=A 
1
​
 ,A 
2
​
 ,…,A 
N
​
 . Chef needs to find the mode of the frequencies of the numbers. If there are multiple modal values, report the smallest one. In other words, find the frequency of all the numbers, and then find the frequency which has the highest frequency. If multiple such frequencies exist, report the smallest (non-zero) one.

More formally, for every vv such that there exists at least one ii such that A_i = vA 
i
​
 =v, find the number of jj such that A_j = vA 
j
​
 =v, and call that the frequency of vv, denoted by freq(v)freq(v). Then find the value ww such that freq(v) = wfreq(v)=w for the most number of vvs considered in the previous step. If there are multiple values ww which satisfy this, output the smallest among them.

As you are one of Chef's friends, help him complete the assignment.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    cin >> T;
    while (T--)
    {
        cin >> N;
        int A[N];
        int B[10] = {0};
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int j = 0; j < N; j++)
        {
            B[A[j] - 1]++;
        }
        int C[10001] = {0};
        for (int i = 0; i < 10; i++)
        {
            if (B[i] > 0)
            {
                C[B[i] - 1]++;
            }
        }
        int max_num = INT_MIN;
        for (int i = 0; i < 10001; i++)
        {
            max_num = max(max_num, C[i]);
        }
        for (int i = 0; i < 10001; i++)
        {
            if (C[i] == max_num)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}