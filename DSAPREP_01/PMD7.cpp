/*
Quick! You need to solve this problem in order to help the Chef get an A on a math exam! The problem is as follows:

You are given two integers:
�
X and
�
M. Now, you need to replace each digit of
�
X (let’s call them
�
�
d
i
​
 ) with
�
�
�
m
o
d
 
 
10
d
i
M
​
 mod10. Let’s call the new number
�
Y and reverse it (explained in note 3). Check whether
�
Y is divisible by
7
7.

Note 1:
�
�
�
=
�
�
⋅
�
�
⋅
.
.
.
⋅
�
�
d
i
M
​
 =d
i
​
 ⋅d
i
​
 ⋅...⋅d
i
​
  (
�
M times) - definition of
�
�
d
i
​
  to the power of
�
M. Special case:
�
�
�
=
1
d
i
M
​
 =1, when
�
=
0
M=0

Note 2:
�
m
o
d
 
 
10
Xmod10 is the remainder of division
�
X by
10
10, where
�
X is some integer number.

Note 3: Reversing an integer is an operation that reverse the order of its digits and erase leading zeros. For example:
123
123 when reversed becomes
321
321 and
450
450 when reversed becomes
54
54.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long int x, m;
        cin >> x >> m;
        if (m > 4)
        {
            if (m % 4 == 0)
                m = 4;
            else
                m = m % 4;
        }
        unsigned long long int num = 0;
        while (x)
        {
            unsigned long long temp = x % 10;
            temp = pow(temp, m);
            temp = temp % 10;
            num *= 10;
            num += temp;
            x /= 10;
        }
        cout << ((num % 7 == 0) ? "YES" : "NO") << endl;
    }
    return 0;
}