/*
A tourist is visiting Byteland. The tourist knows English very well. The language of Byteland is rather different from English. To be exact it differs in following points:

Bytelandian alphabet has the same letters as English one, but possibly different in meaning. Like 'A' in Bytelandian may be 'M' in English. However this does not mean that 'M' in Bytelandian must be 'A' in English. More formally, Bytelindian alphabet is a permutation of English alphabet. It will be given to you and could be any possible permutation. Don't assume any other condition.
People of Byteland don't like to use invisible character for separating words. Hence instead of space (' ') they use underscore ('_'). Other punctuation symbols, like '?', '!' remain the same as in English.
The tourist is carrying "The dummies guide to Bytelandian", for translation. The book is serving his purpose nicely. But he is addicted to sharing on BaceFook, and shares his numerous conversations in Byteland on it. The conversations are rather long, and it is quite tedious to translate for his English friends, so he asks you to help him by writing a program to do the same.*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    string m;
    cin >> m;
    int p;
    char c = ' ';

    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();

        for (int i = 0; i < n; i++)
        {
            p = s[i];

            if (p <= 65 + 26 && p >= 65)
            {

                s[i] = m[p - 65] - 32;
            }
            else if (s[i] <= 'z' && s[i] >= 'a')
            {

                s[i] = m[p - 97];
            }
            else if (s[i] == '_')
                s[i] = c;
        }

        cout << s << endl;
    }
    return 0;
}
