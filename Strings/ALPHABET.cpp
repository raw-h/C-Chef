/*
Not everyone probably knows that Chef has younger brother Jeff. Currently Jeff learns to read.

He knows some subset of the letter of Latin alphabet. In order to help Jeff to study, Chef gave him a book with the text consisting of N words. Jeff can read a word iff it consists only of the letters he knows.

Now Chef is curious about which words his brother will be able to read, and which are not. Please help him!
*/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    while (n--)
    {
        string w;
        cin >> w;
        int cnt = 0;
        for (int j = 0; j < w.length(); j++)
        {

            for (int k = 0; k < s.length(); k++)
            {

                if (w[j] == s[k])
                {
                    cnt++;
                }
            }
        }
        if (cnt == w.length())
        {

            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}