/*
Once, after a stressful day, Chef decided to relax and visit a casino near his house to gamble. He feels lucky and he's going to bet almost all of his money.

The game Chef is going to play in the casino consists of tossing a die with NN faces twice. There is a number written on each face of the die (these numbers are not necessarily distinct). In order to win, Chef must get the number AA on the first toss and the number BB on the second toss of the die.

The excited viewers want to know the probability that Chef will win the game. Can you help them find that number? Assume that Chef gets each face of the die with the same probability on each toss and that tosses are mutually independent.
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int x[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        int count = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (x[i] == a)
            {
                count++;
            }
            if (x[i] == b)
            {
                sum++;
            }
        }
        float p = (float)(count * sum) / (n * n);
        cout << fixed << setprecision(10) << p << endl;
    }
    return 0;
}