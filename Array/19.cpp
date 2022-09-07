/*
Chef has a number D containing only digits 0's and 1's. He wants to make the number to have all the digits same. For that, he will change exactly one digit, i.e. from 0 to 1 or from 1 to 0. If it is possible to make all digits equal (either all 0's or all 1's) by flipping exactly 1 digit then output "Yes", else print "No" (quotes for clarity)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string num;
        cin >> num;
        int ones = 0, zeroes = 0;
        for (int i = 0; i < num.length(); i++)
        {
            if(num[i] == '1')
                ones++;
            else if(num[i] == '0')
                zeroes++;
        }
        if(ones == 1 || zeroes == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}