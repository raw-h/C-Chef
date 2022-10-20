/*
Given an alphanumeric string made up of digits and lower case Latin characters only, find the sum of all the digit characters in the string.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int sum = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if(int(str[i]) < 97)
                sum += (int(str[i]) - 48);
        }
        cout << sum << endl;
    }
    return 0;
}