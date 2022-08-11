/*
Chef has decided to go to a gold mine along with NN of his friends (thus, total N+1N+1 people including Chef go to the gold mine).

The gold mine contains a total of XX kg of gold. Every person has the capacity of carrying up \textbf{atmost}atmost YY kg of gold.

Will Chef and his friends together be able to carry up all the gold from the gold mine assuming that they can go to the mine exactly once.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x, y;
        cin >> n >> x >> y;
        if ((n + 1) * y >= x)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
