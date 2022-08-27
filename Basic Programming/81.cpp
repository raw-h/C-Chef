#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int test_cases;
        cin >> test_cases;
        int arr[test_cases];
        for (int j = 0; j < test_cases; j++)
            cin >> arr[j];
        string succ_rate;
        cin >> succ_rate;
        for (int k = 0; k < test_cases; k++)
        {
            int smallest_index = INT_MAX;
            int smallest_t_c = INT_MAX;
            for (int l = 0; l < test_cases; l++)
            {
                if (arr[l] < smallest_t_c)
                {
                    smallest_t_c = arr[l];
                    smallest_index = l;
                }
            }
            if (succ_rate[smallest_index] == '0')
            {
                cout << smallest_t_c << endl;
                break;
            }
            else
                arr[smallest_index] += 100;
        }
    }
    return 0;
}