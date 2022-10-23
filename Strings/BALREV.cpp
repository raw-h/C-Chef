/*
Chef is given a binary string AA of length NN. He can perform the following operation on AA any number of times:

Choose LL and RR (1 \leq L \leq R \leq N)(1≤L≤R≤N), such that, in the substring A[L,R]A[L,R], the number of 11s is equal to the number of 00s and reverse the substring A[L,R]A[L,R].
Find the lexicographically smallest string that Chef can obtain after performing the above operation any (possibly zero) number of times on AA.

String XX is lexicographically smaller than string YY, if either of the following satisfies:

XX is a prefix of YY and X \neq YX=Y.
There exists an index ii such that X_i \lt Y_iX 
i
​
 <Y 
i
​
  and X_j = Y_j, \forall jX 
j
​
 =Y 
j
​
 ,∀j such that 1 \leq j \lt i1≤j<i.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << s << endl;
    }
}
