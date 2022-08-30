/*
Chef likes problems involving arrays. Unfortunately, the last one he tried to solve didn't quite get solved.

Chef has an array A of N positive numbers. He wants to find the number of subarrays for which the sum and product of elements are equal.

Please help Chef find this number.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        int count = 0;
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        for (int j = 0; j < n; j++)
        {
            for (int k = j; k < n; k++)
            {
                int sum = 0;
                int product = 1;
                for (int l = j; l <= k; l++)
                {
                    sum += arr[l];
                    product *= arr[l];
                }
                if (sum == product)
                    count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}