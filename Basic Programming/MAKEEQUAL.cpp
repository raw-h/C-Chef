/*
Chef has an array AA having NN elements. Chef wants to make all the elements of the array equal by repeating the following move.

Choose any integer KK between 11 and NN (inclusive). Then choose KK distinct indices i_1 , i_2, \dots, i_Ki 
1
​
 ,i 
2
​
 ,…,i 
K
​
 , and increase the values of A_{i_1} , A_{i_2} , \dots , A_{i_K}A 
i 
1
​
 
​
 ,A 
i 
2
​
 
​
 ,…,A 
i 
K
​
 
​
  by 11.
Find the minimum number of moves required to make all the elements of the array equal.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int max_el = INT_MIN;
        int min_el = INT_MAX;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            max_el = max(max_el, arr[i]);
            min_el = min(min_el, arr[i]);
        }
        cout << max_el - min_el << endl;
    }
    return 0;
}