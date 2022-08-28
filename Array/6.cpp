/*
Chef has an array AA of length NN.

In one operation, Chef can choose any two distinct indices i, ji,j (1 \leq i, j \leq N, i \neq j)(1≤i,j≤N,i=j) and either change A_iA 
i
​
  to A_jA 
j
​
  or change A_jA 
j
​
  to A_iA 
i
​
 .

Find the minimum number of operations required to make all the elements of the array equal.
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
        int size = INT_MIN;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            size = max(size, arr[j]);
        }
        int freq_array[size + 1] = {0};
        for (int j = 0; j < n; j++)
            freq_array[arr[j]]++;
        int max_freq_element = INT_MIN;
        for (int j = 0; j < size + 1; j++)
            max_freq_element = max(max_freq_element, freq_array[j]);
        cout << n - max_freq_element << endl;
    }
    return 0;
}