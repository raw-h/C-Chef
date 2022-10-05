/*
As we all know, Chef is cooking string for long days, his new discovery on string is the longest common pattern length. The longest common pattern length between two strings is the maximum number of characters that both strings have in common. Characters are case sensitive, that is, lower case and upper case characters are considered as different. Note that characters can repeat in a string and a character might have one or more occurrence in common between two strings. For example, if Chef has two strings A = "Codechef" and B = "elfedcc", then the longest common pattern length of A and B is 5 (common characters are c, d, e, e, f).

Chef wants to test you with the problem described above. He will give you two strings of Latin alphabets and digits, return him the longest common pattern length.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        int c = 0;
        int i = 0;
        int j = 0;
        while (i < s1.size() && j < s2.size())
        {
            if (s1[i] == s2[j])
            {
                c++, i++, j++;
            }
            else
            {
                if (s1[i] < s2[j])
                    i++;
                else
                    j++;
            }
        }
        cout << c << endl;
    }
    return 0;
}