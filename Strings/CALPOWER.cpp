/*
Sardar Singh has many men fighting for him, and he would like to calculate the power of each of them to better plan for his fight against Ramadhir.
The power of a string SS of lowercase English alphabets is defined to be \sum_{i = 1}^{|S|} i\cdot ord(S_i) i=1 ∑∣S∣i⋅ord(S i)where ord(S_i)ord(S i)is the position of S_iSi in the alphabet, i.e, ord('a') = 1, ord('b') = 2, \dots, ord('z') = 26 ord(′a′)=1,ord(′b′)=2,…,ord(′z′)=26.
Each of Sardar Singh's men has a name consisting of lowercase English alphabets. The power of a man is defined to be the maximum power over all possible rearrangements of this string.
Find the power of each of Sardar Singh's men.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        int ans = 0;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        for (int i = 0; i < str.length(); i++)
            ans += (i + 1) * (str[i] - 'a' + 1);
        cout << ans << endl;
    }
    return 0;
}