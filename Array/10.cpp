#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int length, max_dist;
        cin >> length >> max_dist;
        int arr[length];
        for (int j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        int max_girls = INT_MIN;
        for (int k = 0; k < length - 1; k++)
        {
            int sum = arr[k] + arr[k + 1];
            max_girls = max(max_girls, sum);
        }
        cout << max_girls << endl;
    }
    return 0;
}
