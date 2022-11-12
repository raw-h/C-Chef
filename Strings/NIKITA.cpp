/*
Nitika was once reading a history book and wanted to analyze it. So she asked her brother to create a list of names of the various famous personalities in the book. Her brother gave Nitika the list. Nitika was furious when she saw the list. The names of the people were not properly formatted. She doesn't like this and would like to properly format it.

A name can have at most three parts: first name, middle name and last name. It will have at least one part. The last name is always present. The rules of formatting a name are very simple:

Only the first letter of each part of the name should be capital.
All the parts of the name except the last part should be represented by only two characters. The first character should be the first letter of the part and should be capitalized. The second character should be ".".
Let us look at some examples of formatting according to these rules:

gandhi -> Gandhi
mahatma gandhI -> M. Gandhi
Mohndas KaramChand ganDhi -> M. K. Gandhi
*/
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);

        string ans = "";
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
            {
                ans = ans + (char)toupper(s[j]) + ". ";
                j = i + 1;
            }
        }
        for (int i = j; i < s.size(); i++)
        {
            if (i == j)
            {
                ans += (char)toupper(s[j]);
            }
            else
            {
                ans += (char)tolower(s[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
