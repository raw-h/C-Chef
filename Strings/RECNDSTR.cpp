/*
Chef has a string SS consisting of lowercase English characters. Chef defined functions left shift L(X)L(X) and right shift R(X)R(X) as follows.

L(X)L(X) is defined as shifting all characters of string XX one step towards left and moving the first character to the end.
R(X)R(X) is defined as shifting all characters of string XX one step towards the right and moving the last character to the beginning.
For example, L("abcd") = "bcda" and R("abcd") = "dabc"

Chef wants to find out whether there exists a string VV of the same length as SS such that both L(V) = SL(V)=S and R(V) = SR(V)=S holds.
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
        cin >> s;
        string ls = s;
        string rs = s;
        int n = s.length();
        char c = s[0];
        for (int i = 0; i < n - 1; i++)
            ls[i] = ls[i + 1];
        ls[n - 1] = c;
        c = rs[n - 1];
        for (int i = n - 1; i > 0; i--)
            rs[i] = rs[i - 1];
        rs[0] = c;
        if (ls == rs)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}