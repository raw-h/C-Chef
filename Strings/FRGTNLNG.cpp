/*
Forgotten languages (also known as extinct languages) are languages that are no longer in use. Such languages were, probably, widely used before and no one could have ever imagined that they will become extinct at some point. Unfortunately, that is what happened to them. On the happy side of things, a language may be dead, but some of its words may continue to be used in other languages.
Using something called as the Internet, you have acquired a dictionary of N words of a forgotten language. Meanwhile, you also know K phrases used in modern languages. For each of the words of the forgotten language, your task is to determine whether the word is still in use in any of these K modern phrases or not.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, K;
        cin >> N >> K;
        vector<string> forgoten(N);
        vector<string> morden;
        for (int i = 0; i < N; i++)
        {
            cin >> forgoten[i];
        }
        for (int i = 0; i < K; i++)
        {
            int temp;
            cin >> temp;
            for (int j = 0; j < temp; j++)
            {
                string s;
                cin >> s;
                morden.push_back(s);
            }
        }
        for (int i = 0; i < N; i++)
        {
            bool check = false;
            for (int j = 0; j < morden.size(); j++)
            {
                if (morden[j] == forgoten[i])
                {
                    check = true;
                }
            }
            if (check == true)
            {
                cout << "YES"
                     << " ";
            }
            else
            {
                cout << "NO"
                     << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
