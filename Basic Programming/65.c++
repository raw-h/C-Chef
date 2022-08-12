/*
A particular month has 3030 days, numbered from 11 to 3030.

Day 11 is a Monday, and the usual 77-day week is followed (so day 22 is Tuesday, day 33 is Wednesday, and so on).

Every Saturday and Sunday is a holiday. There are NN festival days, which are also holidays. Note that it is possible for a festival day to occur on a Saturday or Sunday.

You are given the dates of the festivals. Determine the total number of holidays in this month.
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int holidays = 8;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != 6 && arr[i] != 13 && arr[i] != 20 && arr[i] != 27 && arr[i] != 7 && arr[i] != 14 && arr[i] != 21 && arr[i] != 28)
                holidays++;
        }
        cout << holidays << endl;
    }
    return 0;
}
