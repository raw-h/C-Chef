/*
There are 33 problems in a contest namely A, B, CA,B,C respectively. Alice bets Bob that problem CC is the hardest while Bob says that problem BB will be the hardest.

You are given three integers S_A, S_B, S_CS 
A
​
 ,S 
B
​
 ,S 
C
​
  which denotes the number of successful submissions of the problems A, B, CA,B,C respectively. It is guaranteed that each problem has a different number of submissions. Determine who wins the bet.

If Alice wins the bet (i.e. problem CC is the hardest), then output AliceAlice.

If Bob wins the bet (i.e. problem BB is the hardest), then output BobBob.

If no one wins the bet (i.e. problem AA is the hardest), then output DrawDraw.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int min_b_c = min(b, c);
        int ans = min(min_b_c, a);
        if (ans == b)
            cout << "Bob" << endl;
        else if (ans == c)
            cout << "Alice" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}
