/*
"I don't have any fancy quotes." - vijju123

Chef was reading some quotes by great people. Now, he is interested in classifying all the fancy quotes he knows. He thinks that all fancy quotes which contain the word "not" are Real Fancy; quotes that do not contain it are regularly fancy.

You are given some quotes. For each quote, you need to tell Chef if it is Real Fancy or just regularly fancy.
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    for (int a = 0; a < t; a++)
    {
        string s;
        getline(cin, s);
        s = ' ' + s + ' ';
        int n = s.size();
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            //	        cout<<s[i-1]<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<< "        -->"<<a<<endl;
            if (s[i] == ' ' && s[i + 1] == 'n' && s[i + 2] == 'o' && s[i + 3] == 't' && s[i + 4] == ' ')

            {

                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "Real Fancy" << endl;
        else
            cout << "regularly fancy" << endl;
    }
    return 0;
}
