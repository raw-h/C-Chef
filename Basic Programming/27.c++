/*
Write a program to take two numbers as input and print their difference if the first number is greater than the second number otherwiseotherwise print their sum.
*/
#include <iostream>
using namespace std;

int main()
{
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    if (n1 > n2)
    {
        int diff = n1 - n2;
        cout << diff << endl;
    }
    else
    {
        int sum = n1 + n2;
        cout << sum << endl;
    }
    return 0;
}
