/*
Soma is a fashionable girl. She absolutely loves shiny stones that she can put on as jewellery accessories. She has been collecting stones since her childhood - now she has become really good with identifying which ones are fake and which ones are not. Her King requested for her help in mining precious stones, so she has told him which all stones are jewels and which are not. Given her description, your task is to count the number of jewel stones.

More formally, you're given a string J composed of latin characters where each character is a jewel. You're also given a string S composed of latin characters where each character is a mined stone. You have to find out how many characters of S are in J as well.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string j;
        cin >> j;
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            for (int k = 0; k < j.size(); k++)
            {
                if (j[k] == s[i])
                {
                    c++;
                    break;
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}