/*
Vishal loves running. He often visits his favourite Nehru Park and runs for very long distances. On one such visit he found that the number of girls in the park was unusually high. Now he wants to use this as an opportunity to impress a large number of girls with his awesome speed.

The track on which he runs is an \text{N}N kilometres long straight path. There are \mathbf{a_i}a 
i
​
  girls standing within the \text{ith}ith kilometre of this path. A girl will be impressed only if Vishal is running at his maximum speed when he passes by her. But he can run at his best speed only for a single continuous stretch of \text{K}K kilometres. Now Vishal wants to know what is the maximum number of girls that he can impress.
*/
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
        int sum = 0;
        for (int k = 0; k < length; k++)
        {
            if ((k + max_dist) <= length)
            {
                for (int l = k; l < k + max_dist; l++)
                {
                    sum += arr[l];
                    max_girls = max(max_girls, sum);
                }
            }
            sum = 0;
        }
        cout << max_girls << endl;
    }
    return 0;
}