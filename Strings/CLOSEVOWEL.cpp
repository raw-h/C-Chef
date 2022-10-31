/*
Chef considers a string consisting of lowercase English alphabets beautiful if all the characters of the string are vowels.

Chef has a string SS consisting of lowercase English alphabets, of length NN. He wants to convert SS into a beautiful string TT. In order to do so, Chef does the following operation on every character of the string:

If the character is a consonant, change the character to its closest vowel.
If the character is a vowel, don't change it.
Chef realizes that the final string TT is not unique. Chef wonders, what is the total number of distinct beautiful strings TT that can be obtained by performing the given operations on the string SS.

Since the answer can be huge, print it modulo 10^9 + 710
9
 +7.

Note:

There are 2626 characters in the English alphabet. Five of these characters are vowels: a, e, i, o, and u. The remaining 2121 characters are consonants.
The closest vowel to a consonant is the vowel that is least distant from that consonant. For example, the distance between the characters d and e is 11 while the distance between the characters d and a is 33.
The distance between the characters z and a is 2525 and not 11.
*/
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    // your code goes here
    int f;
    cin >> f;
    while (f--)
    {
        int a;
        cin >> a;
        string str;
        cin >> str;
        int q = 1;
        for (int i = 0; i < a; i++)
        {
            if (str.at(i) == 'c' || str.at(i) == 'g' || str.at(i) == 'l' || str.at(i) == 'r')
                q = (q * 2) % 1000000007;
        }
        // int z=pow(2,q);
        // int y=z%1000000007;
        if (q == 0)
            cout << 1 << endl;
        else
            cout << q << endl;
    }
    return 0;
}
