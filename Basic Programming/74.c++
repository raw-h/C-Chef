/*
You are a person who is always fond of eating candies. Your friend gave you a candy of length NN, to eat during the break period of your school.

You start eating this candy from one of the ends. But as it is not your candy, your friend told you to eat exactly KK unit length of candy during each bite. You will stop eating if the candy's length becomes 00. This means that you have eaten the entire candy.

If at some point of time, the candy's length is positive, but less than KK, you cannot take a bite thereafter.

Can you eat the complete candy? If yes, print the number bites it will take, else print -1−1.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int length, unit;
        cin >> length >> unit;
        if(length % unit != 0)
            cout << "-1\n";
        else
            cout << (length / unit) << "\n";
    }
    return 0;
}