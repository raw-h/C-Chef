/*
Chef was reading a book. He decided to highlight all the lovely sentences of the book. He calls a sentence a lovely sentence if, after removing all the non-alphabetical characters (like punctuation and spaces) from it and converting all uppercase letters to lowercase, it is possible to choose four contiguous characters from the sentence and reorder them to create the string “chef”.

Chef has almost completed the highlighting work, only a few sentences are left to be checked and highlighted. Now, he wants your help in checking the remaining sentences, as he has to help his mother in the kitchen.

Each sentence s has already been preprocessed — all non-alphabetical characters have been erased and all remaining uppercase characters converted to lowercase. You should determine whether s is a lovely sentence or not. If it is a lovely sentence, then Chef is also interested in the number of possible ways to select 4 contiguous characters that can be reordered to give his name (the string "chef").
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string str, var = "cefh";
        int ct = 0;
        for (int i = 0; i < s.size(); i++)
        {
            str = s.substr(i, 4);
            sort(str.begin(), str.end());
            if (str == var)
            {
                ct++;
            }
        }
        if (ct == 0)
        {
            cout << "normal" << endl;
        }
        else
        {
            cout << "lovely"
                 << " " << ct << endl;
        }
    }

    return 0;
}
