/*
Today, Chef decided to cook some delicious meals from the ingredients in his kitchen. There are NN ingredients, represented by strings S_1, S_2, \ldots, S_NS
1
​
 ,S
2
​
 ,…,S
N
​
 . Chef took all the ingredients, put them into a cauldron and mixed them up.

In the cauldron, the letters of the strings representing the ingredients completely mixed, so each letter appears in the cauldron as many times as it appeared in all the strings in total; now, any number of times, Chef can take one letter out of the cauldron (if this letter appears in the cauldron multiple times, it can be taken out that many times) and use it in a meal. A complete meal is the string "codechef". Help Chef find the maximum number of complete meals he can make!
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        string str;
        string check_with = {'c', 'o', 'd', 'e', 'h', 'f'};
        cin >> n;
        int c_chef[6] = {0};
        while(n--)
        {
            cin >> str;
            for (int i = 0; i < str.length(); i++)
            {
                for (int j = 0; j < 6; j++)
                {
                    if(str.at(i) == check_with[j]){
                        c_chef[j]++;
                    }
                }
            }
        }
        int dishes = INT_MAX;
        c_chef[0] /= 2;
        c_chef[3] /= 2;

        for (int i = 0; i < 6; i++){
            dishes = min(dishes, c_chef[i]);
        }
        cout << dishes << endl;
    }
    return 0;
}