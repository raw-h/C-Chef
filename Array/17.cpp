/*
On a sunny day, Akbar and Birbal were taking a leisurely walk in palace gardens. Suddenly, Akbar noticed a bunch of sticks on the ground and decided to test Birbal's wits.

There are NN stick holders with negligible size (numbered 11 through NN) in a row on the ground. Akbar places all the sticks in them vertically; for each valid ii, the initial height of the stick in the ii-th holder is A_iA 
i
​
 . Birbal has a stick cutter and his task is to completely cut all these sticks, i.e. reduce the heights of all sticks to 00. He may perform zero or more operations; in each operation, he should do the following:

Choose an integer HH and fix the cutter at the height HH above the ground.
The cutter moves from the 11-st to the NN-th stick holder. Whenever it encounters a stick whose current height is greater than HH, it cuts this stick down to height HH (i.e. for a stick with height h \gt Hh>H, it removes its upper part with length h-Hh−H).
All the upper parts of sticks that are cut in one operation must have equal lengths. Otherwise, the operation may not be performed.
For example, if the heights of sticks are initially [5, 3, 5][5,3,5], then some valid values for HH in the first operation are 33 and 44 ― the cutter cuts the upper parts of two sticks and their lengths are [2, 2][2,2] and [1, 1][1,1] respectively. H = 2H=2 is an invalid choice because it would cut the upper parts of all three sticks with lengths [3, 1, 3][3,1,3], which are not all equal.

Akbar wants Birbal to completely cut all sticks in the minimum possible number of operations. If you want to be friends with Birbal, help him solve the problem.
*/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     unsigned long long t;
//     cin >> t;
//     while (t--)
//     {
//         unsigned long long n, operations = 0, i, j, k;
//         cin >> n;
//         long arr[n], freq[n] = {0};
//         for (i = 0; i < n; i++){
//             cin >> arr[i];
//         }
//         for (j = 0; j < n; j++){
//             freq[arr[j] - 1] = 1;
//         }
//         for (k = 0; k < n; k++)
//         {
//             if(freq[k] == 1)
//                 operations++;
//         }
//         cout << operations << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long t;
    cin >> t;
    while (t--)
    {
        unsigned long long n, i, j, operations = 0, temp = 0;
        cin >> n;
        long arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            temp = temp + arr[i];
        }
        if (temp == 0)
            cout << "0" << endl;
        else
        {
            sort(arr, arr + n);
            for (i = 0; i < n - 1; i++)
            {
                if (arr[i] == 0)
                    continue;
                if (arr[i] != arr[i + 1])
                {
                    operations++;
                }
            }
            cout << operations + 1 << endl;
        }
    }
    return 0;
}
