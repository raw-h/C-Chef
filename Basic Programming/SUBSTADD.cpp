/*
Chef is asked to write a program that takes an array AA of length NN and two integers X, YX,Y as input and modifies it as follows:

Choose a random subset of elements of AA (possibly empty)
Increase all the elements of the chosen subset by XX
Increase the remaining elements in AA by YY
You are given NN, XX, YY, AA and the array BB that is returned by Chef's program. Determine whether Chef's program gave the correct output.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int arr1[n];
        int arr2[n];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < n; i++)
            cin >> arr2[i];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if((abs(arr1[i] - arr2[i]) == x) || (abs(arr1[i] - arr2[i]) == y))
                count++;
        }
        if(count == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}