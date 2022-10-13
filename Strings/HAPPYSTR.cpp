/*
Chef has a string SS with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 22 in which all its characters are vowels.

Determine whether Chef is happy or not.

Note that, in english alphabet, vowels are a, e, i, o, and u.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string strr;
        cin >> strr;
        int count = 0;
        bool flag = 0;
        for (int i = 0; i < strr.length(); i++)
        {
            if (strr[i] == 'a' || strr[i] == 'e' || strr[i] == 'i' || strr[i] == 'u' || strr[i] == 'o')
            {
                count++;
                if (count > 2)
                {
                    flag = 1;
                    break;
                }
            }
            else
                count = 0;
        }
        if (flag)
        {
            cout << "Happy" << endl;
        }
        else
            cout << "Sad" << endl;
    }
    return 0;
}