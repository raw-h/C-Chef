/*
A positive integer
�
X is called lucky if it has an even power of
2
2 in its prime factorization. More formally, let
�
p be the largest integer such that
�
X is divisible by
2
�
2
p
 . Then
�
X is a lucky number if and only if
�
p is divisible by
2
2.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long n;
        cin >> n;
        unsigned long long count = 0;
        while(n % 2 == 0){
            count++;
            n /= 2;
        }
        if(count % 2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}