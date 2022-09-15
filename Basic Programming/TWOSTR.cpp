/*
Chef wants to implement wildcard pattern matching supporting only the wildcard '?'. The wildcard character '?' can be substituted by any single lower case English letter for matching. He has two strings X and Y of equal length, made up of lower case letters and the character '?'. He wants to know whether the strings X and Y can be matched or not.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str1, str2;
        cin >> str1 >> str2;
        bool flag = 1;
        for (int i = 0; i < str1.length(); i++)
        {
            if ((str1[i] == str2[i]) || (str1[i] == '?') || (str2[i] == '?'))
                continue;
            else
                flag = 0;
        }
        if(flag == 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}