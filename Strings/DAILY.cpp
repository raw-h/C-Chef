/*
A daily train consists of N cars. Let's consider one particular car. It has 54 places numbered consecutively from 1 to 54, some of which are already booked and some are still free. The places are numbered in the following fashion: daily.jpg

The car is separated into 9 compartments of 6 places each, as shown in the picture. So, the 1st compartment consists of places 1, 2, 3, 4, 53 and 54, the 2nd compartment consists of places 5, 6, 7, 8, 51 and 52, and so on.

A group of X friends wants to buy tickets for free places, all of which are in one compartment (it's much funnier to travel together). You are given the information about free and booked places in each of the N cars. Find the number of ways to sell the friends exactly X tickets in one compartment (note that the order in which the tickets are sold doesn't matter).
*/
#include <iostream>
using namespace std;

int fact(int t)
{
    if (t == 0)
    {
        return 1;
    }
    if (t == 1)
    {
        return 1;
    }
    if (t == 2)
    {
        return 2;
    }
    if (t == 3)
    {
        return 6;
    }
    if (t == 4)
    {
        return 24;
    }
    if (t == 5)
    {
        return 120;
    }
    if (t == 6)
    {
        return 720;
    }
}

int main()
{
    // your code goes here
    int x, n;
    cin >> x >> n;
    long long int c = 0;
    while (n--)
    {
        string s;
        cin >> s;

        for (int i = 0; i < 9; i++)
        {
            int count = 0;
            if (s[4 * i] == '0')
            {
                count++;
            }
            if (s[4 * i + 1] == '0')
            {
                count++;
            }
            if (s[4 * i + 2] == '0')
            {
                count++;
            }
            if (s[4 * i + 3] == '0')
            {
                count++;
            }
            if (s[53 - (2 * i)] == '0')
            {
                count++;
            }
            if (s[53 - (2 * i + 1)] == '0')
            {
                count++;
            }
            if (count >= x)
            {
                long long int y = fact(count) / (fact(x) * fact(count - x));
                c = c + y;
            }
        }
    }
    cout << c << endl;
    return 0;
}