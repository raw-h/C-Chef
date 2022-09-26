/*
Our little chef is fond of doing additions/sums in his free time. Today, he has an array A consisting of N positive integers and he will compute prefix and suffix sums over this array.

He first defines two functions prefixSum(i) and suffixSum(i) for the array as follows. The function prefixSum(i) denotes the sum of first i numbers of the array. Similarly, he defines suffixSum(i) as the sum of last N - i + 1 numbers of the array.

Little Chef is interested in finding the minimum index i for which the value prefixSum(i) + suffixSum(i) is the minimum. In other words, first you should minimize the value of prefixSum(i) + suffixSum(i), and then find the least index i for which this value is attained.

Since, he is very busy preparing the dishes for the guests, can you help him solve this problem?
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        int i = 0;
        for (i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        int small = A[0];
        int index = 0;
        for (i = 0; i < n; i++)
        {
            if (A[i] < small)
            {
                small = A[i];
                index = i;
            }
        }
        cout << index + 1 << endl;
    }
    return 0;
}