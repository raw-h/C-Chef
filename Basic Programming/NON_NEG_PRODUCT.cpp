/*Alice has an array of
�
N integers —
�
1
,
�
2
,
…
,
�
�
A
1
​
 ,A
2
​
 ,…,A
N
​
 . She wants the product of all the elements of the array to be a non-negative integer. That is, it can be either
0
0 or positive. But she doesn't want it to be negative.

To do this, she is willing to remove some elements of the array. Determine the minimum number of elements that she will have to remove to make the product of the array's elements non-negative.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int result = 0;
        for(auto bt : v){
            if(bt == 0){
                result = 0;
                break;
            }
            else if (bt < 0)
                result++;
        }
        cout << "Result: " << result << endl;
        if((result % 2) == 0)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}