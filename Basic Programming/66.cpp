/*
Write a program to obtain a number (N)(N) from the user and display whether the number is a one digit number, 2 digit number, 3 digit number or more than 3 digit number
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    if(count == 1)
        cout << "1" << endl;
    else if(count == 2)
        cout << "2" << endl;
    else if(count == 3)
        cout << "3" << endl;
    else
        cout << "More than 3 digits" << endl;
    return 0;
}
