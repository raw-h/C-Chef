/*
Chef will have NN guests in his house today. He wants to serve at least one dish to each of the NN guests. Chef can make two types of dishes. He needs one fruit and one vegetable to make the first type of dish and one vegetable and one fish to make the second type of dish. Now Chef has AA fruits, BB vegetables, and CC fishes in his house. Can he prepare at least NN dishes in total?
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, fruits, vegetables, fishes;
        cin >> n >> fruits >> vegetables >> fishes;
        if (vegetables >= n)
        {
            if ((fruits + fishes) >= n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
