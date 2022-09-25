/*
Strings A and B are called anagrams if it's possible to rearrange the letters of string A using all the original letters exactly once and achieve string B; in other words A and B are permutations of each other. For example, remote and meteor are anagrams, race and race are anagrams as well, while seat and tease aren't anagrams as tease contains an extra 'e'.

String A is called a subsequence of string B if A can be obtained from B by removing some (possibly none) characters. For example, cat is a subsequence of scratch, rage is a subsequence of rage, and tame is not a subsequence of steam.

String A is lexicographically smaller than string B of the same length if at the first position where A and B differ A contains a letter which is earlier in the alphabet than the corresponding letter in B.

Recently, Ann received a set of strings consisting of small Latin letters a..z. 'What can I do with them?' -- she asked herself. 'What if I try to find the longest string which is a subsequence of every string from the set?'. Ann spent a lot of time trying to solve the problem... but all her attempts happened to be unsuccessful. She then decided to allow the sought string to be an anagram of some subsequence of every string from the set. This problem seemed to be easier to Ann, but she was too tired to solve it, so Ann asked for your help.

So your task is, given a set of strings, to find the longest non-empty string which satisfies Ann. Moreover, if there are many such strings, choose the lexicographically smallest one.
*/
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    string temp = "";
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int len = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int c = 0;
            for (int j = 0; j < s[i].length(); j++)
            {
                if (ch == s[i][j])
                    c++;
            }
            len = min(len, c);
        }
        temp.append(len, ch);
    }
    if (temp.length())
        cout << temp << endl;
    else
        cout << "no such string\n";
    return 0;
}
