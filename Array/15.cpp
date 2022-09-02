/*
You are given an array AA of length NN. An element XX is said to be dominant if the frequency of XX in AA is strictly greater than the frequency of any other element in the AA.

For example, if A = [2, 1, 4, 4, 4]A=[2,1,4,4,4] then 44 is a dominant element since its frequency is higher than the frequency of any other element in AA.

Find if there exists any dominant element in AA.
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
        int arr[n];
        int freq[n] = {0};
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            freq[arr[j] - 1]++;
        }
        int dominant = INT_MIN;
        for (int j = 0; j < n; j++)
            dominant = max(dominant, freq[j]);
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (dominant == freq[j])
                count++;
        }
        if (count < 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
