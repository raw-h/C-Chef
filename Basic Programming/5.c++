/*
To access CRED programs, one needs to have a credit score of 750750 or more.
Given that the present credit score is XX, determine if one can access CRED programs or not.

If it is possible to access CRED programs, output \texttt{YES}YES, otherwise output \texttt{NO}NO.
*/

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x >= 750)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}
