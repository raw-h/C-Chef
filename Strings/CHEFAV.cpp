/*
A string SS is called Chef's favourite if every substring chef in SS must have a substring code before it.

You are given a string SS of size NN that contains both code and chef as a substring. Please determine if SS is Chef's favourite.

Note: A substring is a continuous part of string which can be obtained by deleting some (may be none) character's from the beginning and some (may be none) character's from the end.
*/
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    long long t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string str;
        cin >> str;
        int code = 0, chef = 0;
        code = str.find("code");
        chef = str.find("chef");
        if (code <= chef)
        {
            cout << "AC" << endl;
        }
        else
        {
            cout << "WA" << endl;
        }
    }
    return 0;
}
