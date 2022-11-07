/*
Given a binary number (of NN bits) XX. Find the highest power of 2 that divides this number.

Note: If the binary number is "100" then the highest power of 2 that divides it is 2 (as 2^22 
2
  = 4)
  */
#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int count = 0;
    string s;
    cin >> s;
    for (int i = x - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            cout << count << "\n";
            break;
        }
        else
        {
            count++;
        }
    }
}
