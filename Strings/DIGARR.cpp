/*
Given a positive integer NN, MoEngage wants you to determine if it is possible to rearrange the digits of NN (in decimal representation) and obtain a multiple of 55.

For example, when N = 108N=108, we can rearrange its digits to construct 180 = 36 \cdot 5180=36⋅5 which is a multiple of 55.
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int digit;
        cin >> digit;
        string num;
        cin >> num;
        bool flag = 0;
        for(int i = 0; i < num.length(); i++){
            if(num[i] == '5' || num[i] == '0')
                flag = 1;
        }
        if(flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}