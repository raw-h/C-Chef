/*
You are given
�
T testcases , in each testcase you are given three numbers
�
A,
�
B and
�
C .
Find that whether an expression of the form ‘‘"‘‘xAyBzC" exists ( where
�
x ,
�
y and
�
z can be
+
+ or
−
− ) , such that the final result is
0
0. If it exists print
‘
‘
�
�
�
"
‘‘YES" (without quotes), else print
‘
‘
"‘‘NO"(without quotes).
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long a, b, c;
        cin >> a >> b >> c;
        unsigned long long maximum_of_ABC = max(a, max(b, c));
        if (maximum_of_ABC == a)
        {
            if ((b + c) == a)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (maximum_of_ABC == b)
        {
            if ((a + c) == b)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (maximum_of_ABC == c)
        {
            if ((b + a) == c)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
