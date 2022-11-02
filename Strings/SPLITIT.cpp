/*
You are given a string SS with length NN. Determine if it is possible to find two non-empty strings AA and BB which satisfy the following conditions:

A + B = SA+B=S, where ++ denotes string concatenation
BB is a substring of AA
Note: BB is a substring of AA if BB can be obtained from AA by deleting several (possibly zero) characters from the beginning and several (possibly zero) characters from the end. For example, "ab" is a substring of "cabd", but "ad" is not.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;
        int k = -1;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[n - 1])
            {
                k = 0;
                cout << "YES" << endl;
                break;
            }
        }
        if (k == -1)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
