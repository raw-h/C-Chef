/*
Bob has an account in the Bobby Bank. His current account balance is WW rupees.

Each month, the office in which Bob works deposits a fixed amount of XX rupees to his account.
YY rupees is deducted from Bob's account each month as bank charges.

Find his final account balance after ZZ months. Note that the account balance can be negative as well.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int curr_amt, deposit, charges, months;
        cin >> curr_amt >> deposit >> charges >> months;
        int balance = curr_amt + (deposit - charges) * months;
        cout << balance << endl;
    }
    return 0;
}