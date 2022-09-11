/*
You are given an array AA of length NN.

A pair (i, j)(i,j) (1\le i\lt j \le N)(1≤i<j≤N) is said to be good if gcd(A_i, A_j) = lcm(A_i, A_j)gcd(A
i
​
 ,A
j
​
 )=lcm(A
i
​
 ,A
j
​
 ). Here gcdgcd denotes the greatest common divisor and lcmlcm denotes least common multiple.

Find the total number of good pairs present in the given array.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        long long size = INT_MIN;
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            size = max(size, arr[i]);
        }
        int count = 0;
        long long freq_arr[size] = {0};
        for (long long i = 0; i < n; i++)
            freq_arr[arr[i] - 1]++;
        for (long long i = 0; i < size; i++)
        {
            if (freq_arr[i] != 0)
                count += ((freq_arr[i] - 1) * (freq_arr[i])) / 2;
        }
        cout << count << endl;
    }
    return 0;
}