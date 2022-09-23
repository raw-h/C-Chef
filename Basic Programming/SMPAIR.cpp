/*
You are given a sequence a1, a2, ..., aN. Find the smallest possible value of ai + aj, where 1 ≤ i < j ≤ N.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. 

The first line of each description consists of a single integer N.

The second line of each description contains N space separated integers - a1, a2, ..., aN respectively.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        long long min1 = INT_MAX;
        long long min2 = INT_MAX;
        for (int i = 0; i < n; i++)
            min1 = min(min1, arr[i]);
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == min1)
                arr[i] = INT_MAX;
        }
        for (int i = 0; i < n; i++)
        {
            min2 = min(arr[i], min2);
        }
        long long sum = min1 + min2;
        cout << sum << endl;
    }
    return 0;
}