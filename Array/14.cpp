/*
Lapindrome is defined as a string which when split in the middle, gives two halves having the same characters and same frequency of each character. If there are odd number of characters in the string, we ignore the middle character and check for lapindrome. For example gaga is a lapindrome, since the two halves ga and ga have the same characters with same frequency. Also, abccab, rotor and xyzxy are a few examples of lapindromes. Note that abbaab is NOT a lapindrome. The two halves contain the same characters but their frequencies do not match.
Your task is simple. Given a string, you need to tell if it is a lapindrome.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int leftalphas[26] = {0};
        int rightalphas[26] = {0};
        string str;
        cin >> str;
        int length = str.length();
        for (int j = 0; j < length / 2; j++)
            leftalphas[str[j] - 'a']++;
        for (int j = (length + 1) / 2; j < length; j++)
            rightalphas[str[j] - 'a']++;
        bool flag = 0;
        for (int j = 0; j < 26; j++)
        {
            if(leftalphas[j] != rightalphas[j])
                flag = 1;
        }
        if(!flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}