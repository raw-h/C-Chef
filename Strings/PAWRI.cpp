/*
Lately, Chef has been inspired by the "pawri" meme. Therefore, he decided to take a string SS and change each of its substrings that spells "party" to "pawri". Find the resulting string.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        for (long long int i = 2; i < str.length() - 2; i++)
        {
            if ((str[i - 2] == 'p') && (str[i - 1] == 'a') && (str[i] == 'r'))
            {
                if((str[i + 1] == 't') && (str[i + 2] == 'y')){
                    str[i] = 'w';
                    str[i + 1] = 'r';
                    str[i + 2] = 'i';
                }
            }
        }
        cout << str << endl;
    }
    return 0;
}