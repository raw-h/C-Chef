/*
Chef wants to buy a new phone, but he is not willing to spend a lot of money. Instead, he checks the price of his chosen model everyday and waits for the price to drop to an acceptable value. So far, he has observed the price for NN days (numbere 11 through NN); for each valid ii, the price on the ii-th day was P_iP 
i
​
  dollars.

On each day, Chef considers the price of the phone to be good if it is strictly smaller than all the prices he has observed during the previous five days. If there is no record of the price on some of the previous five days (because Chef has not started checking the price on that day yet), then Chef simply ignores that previous day ― we could say that he considers the price on that day to be infinite.

Now, Chef is wondering ― on how many days has he considered the price to be good? Find the number of these days.
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
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int ans = 1;
        int p1 = arr[0], p2 = arr[0], p3 = arr[0], p4 = arr[0], p5 = arr[0];
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] < p1) && (arr[i] < p2) && (arr[i] < p3) && (arr[i] < p4) && (arr[i] < p5))
            {
                ans++;
            }
            p5 = p4;
            p4 = p3;
            p3 = p2;
            p2 = p1;
            p1 = arr[i];
        }
        cout << ans << endl;
    }
    return 0;
}
