/*
There are NN seats in a row. You are given a string SS with length NN; for each valid ii, the ii-th character of SS is '0' if the ii-th seat is empty or '1' if there is someone sitting in that seat.

Two people are friends if they are sitting next to each other. Two friends are always part of the same group of friends. Can you find the total number of groups?
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int groups = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] != str[i + 1]) && str[i] == '1'){
                groups++;
            }
        }
        cout << groups << endl;
    }
    return 0;
}