/*
Write a program to obtain a number NN and increment its value by 1 if the number is divisible by 4 otherwiseotherwise decrement its value by 1.
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        n++;
    }
    else
        n--;
    cout << n << endl;
    return 0;
}