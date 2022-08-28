/*
There are N students living in the dormitory of Berland State University. Each of them sometimes wants to use the kitchen, so the head of the dormitory came up with a timetable for kitchen's usage in order to avoid the conflicts:

The first student starts to use the kitchen at the time 0 and should finish the cooking not later than at the time A1.
The second student starts to use the kitchen at the time A1 and should finish the cooking not later than at the time A2.
And so on.
The N-th student starts to use the kitchen at the time AN-1 and should finish the cooking not later than at the time AN
The holidays in Berland are approaching, so today each of these N students wants to cook some pancakes. The i-th student needs Bi units of time to cook.

The students have understood that probably not all of them will be able to cook everything they want. How many students will be able to cook without violating the schedule?
*/
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