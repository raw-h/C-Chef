/*
Write a program to find the factorial value of any number entered by the user.
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
        int factorial = 1;
        for (int i = 1; i <= n; i++)
            factorial *= i;
        cout << factorial << endl;
    }
    return 0;
}
