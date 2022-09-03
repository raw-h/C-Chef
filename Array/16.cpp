/*
Chef is participating in an ICPC regional contest, in which there is a total of NN problems (numbered 11 through NN) with varying difficulties. For each valid ii, the ii-th easiest problem is problem A_iA 
i
​
 .

After a team solves a problem, a balloon with a colour representing that problem is tied next to their desk. Chef is fond of colours in VIBGYOR, which are representative of the problems with numbers 11 through 77. The remaining problems have their own representative colours too.

Find the minimum number of problems which Chef's team needs to solve in order to get all the balloons for problems 11 through 77 (and possibly some other balloons too) tied next to their desk, if you know that Chef's team knows the difficulties of all problems and solves the problems in increasing order of difficulty.
*/
#include <iostream>
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
        int freq[7] = {0};
        int count = 0;
        int last_prob = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if(arr[j] <= 7){
                freq[arr[j] - 1] = 1;
                count++;
                last_prob = j + 1;
            }
        }
        if(count == 7)
            cout << last_prob << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}