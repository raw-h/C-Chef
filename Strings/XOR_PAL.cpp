/*
You are given a binary string AA of length NN.

You can perform the following type of operation on the string AA:

Choose two different indices ii and jj (1\leq i,j\leq N)(1≤i,j≤N);
Change A_iA
i
​
  and A_jA
j
​
  to A_i \oplus A_jA
i
​
 ⊕A
j
​
 . Here \oplus⊕ represents the bitwise XOR operation.
Find the minimum number of operations required to convert the given string into a palindrome.
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        string a;
        cin >> a;
        for (int i = 0; i < n / 2; i++)
        {
            if (a[i] != a[n - 1 - i])
            {
                c++;
            }
        }
        if (c % 2 == 0)
            cout << (c / 2) << endl;
        else
            cout << (c / 2) + 1 << endl;
    }
    return 0;
}
