#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr1[n + 1];
        int arr2[n + 1];
        int count = 0;
        for (int j = 0; j < n; j++)
            cin >> arr1[j];
        for (int j = 0; j < n; j++)
            cin >> arr2[j];
        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                if (arr1[j] >= arr2[j])
                    count++;
            }
            else
            {
                if (arr1[j] - arr1[j - 1] >= arr2[j])
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}