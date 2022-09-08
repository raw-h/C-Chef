/*
Chef recently solved his first problem on CodeChef. The problem he solved has NN test cases. He gets a score for his submission according to the following rules:

If Chef’s code passes all the NN test cases, he gets 100100 points.

If Chef’s code does not pass all the test cases, but passes all the first M\;(M \lt N)M(M<N) test cases, he gets K\;(K \lt 100)K(K<100) points.

If the conditions 11 and 22 are not satisfied, Chef does not get any points (i.e his score remains at 00 points).

You are given a binary array A_1, A_2, \dots, A_NA 
1
​
 ,A 
2
​
 ,…,A 
N
​
  of length NN, where A_i = 1A 
i
​
 =1 denotes Chef's code passed the i^{th}i 
th
  test case, A_i = 0A 
i
​
 =0 denotes otherwise. You are also given the two integers M, KM,K. Can you find how many points does Chef get?
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int success_rate[n] = {0};
        int count = 0;
        for (int i = 0; i < n; i++)
            cin >> success_rate[i];
        for (int i = 0; i < n; i++)
        {
            if(success_rate[i] == 1)
                count++;
            else
                break;
        }
        if(count < m)
            cout << 0 << endl;

        else if(count == n)
            cout << 100 << endl;
        else 
            cout << k << endl;
    }
    return 0;
}