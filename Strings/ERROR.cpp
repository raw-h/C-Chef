/*
Lots of geeky customers visit our chef's restaurant everyday. So, when asked to fill the feedback form, these customers represent the feedback using a binary string (i.e a string that contains only characters '0' and '1'.
Now since chef is not that great in deciphering binary strings, he has decided the following criteria to classify the feedback as Good or Bad :
If the string contains the substring "010" or "101", then the feedback is Good, else it is Bad. Note that, to be Good it is not necessary to have both of them as substring.
So given some binary strings, you need to output whether according to the chef, the strings are Good or Bad.
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
        bool flag = false;
        cin >> str;
        for (int i = 0; i < str.length(); i++)
        {
            if ((str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '0') || (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1'))
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "Good" << endl;

        else
            cout << "Bad" << endl;
    }

    return 0;
}
