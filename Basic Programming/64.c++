/*
Chef is interested in the history of SnackDown contests. He needs a program to verify if SnackDown was hosted in a given year.

SnackDown was hosted by CodeChef in the following years: 2010, 2015, 2016, 2017 and 2019.
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
        if (n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019)
            cout << "HOSTED" << endl;
        else
            cout << "NOT HOSTED" << endl;
    }
    return 0;
}
