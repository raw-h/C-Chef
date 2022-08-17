/*
Chef's son Chefu found some matches in the kitchen and he immediately starting playing with them.

The first thing Chefu wanted to do was to calculate the result of his homework — the sum of AA and BB, and write it using matches. Help Chefu and tell him the number of matches needed to write the result
*/
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int a, b, n, p, total = 0;
        cin >> a >> b;
        n = a + b;
        while (n != 0)
        {
            p = n % 10;
            n = n / 10;
            switch (p)
            {
            case 0:
                total += 6;
                break;
            case 1:
                total += 2;
                break;
            case 2:
                total += 5;
                break;
            case 3:
                total += 5;
                break;
            case 4:
                total += 4;
                break;
            case 5:
                total += 5;
                break;
            case 6:
                total += 6;
                break;
            case 7:
                total += 3;
                break;
            case 8:
                total += 7;
                break;
            case 9:
                total += 6;
                break;
            }
        }
        cout << total << endl;
    }

    return 0;
}
