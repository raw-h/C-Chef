/*
Devu has n weird friends. Its his birthday today, so they thought that this is the best occasion for testing their friendship with him. They put up conditions before Devu that they will break the friendship unless he gives them a grand party on their chosen day. Formally, ith friend will break his friendship if he does not receive a grand party on dith day.

Devu despite being as rich as Gatsby, is quite frugal and can give at most one grand party daily. Also, he wants to invite only one person in a party. So he just wonders what is the maximum number of friendships he can save. Please help Devu in this tough task !!
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
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr+n);
        int days = 1;
        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] != arr[j+1])
                days++;
        }
        cout << days << endl;
    }
    return 0;
}
