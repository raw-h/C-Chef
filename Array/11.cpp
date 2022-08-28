/*
Chef usually likes to play cricket, but now, he is bored of playing it too much, so he is trying new games with strings. Chef's friend Dustin gave him binary strings SS and RR, each with length NN, and told him to make them identical. However, unlike Dustin, Chef does not have any superpower and Dustin lets Chef perform only operations of one type: choose any pair of integers (i, j)(i,j) such that 1 \le i, j \le N1≤i,j≤N and swap the ii-th and jj-th character of SS. He may perform any number of operations (including zero).

For Chef, this is much harder than cricket and he is asking for your help. Tell him whether it is possible to change the string SS to the target string RR only using operations of the given type.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s, r;
        cin >> s >> r;
        int count_s_0 = 0;
        int count_s_1 = 0;
        int count_r_0 = 0;
        int count_r_1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '0')
                count_s_0++;
            else
                count_s_1++;
        }
        for (int j = 0; j < n; j++)
        {
            if (r[j] == '0')
                count_r_0++;
            else
                count_r_1++;
        }
        if (count_s_0 == count_r_0 && count_s_1 == count_r_1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
