/*
Little kids, Jack and Evan like playing their favorite game Glass-and-Stone. Today they want to play something new and came across Twitter on their father's laptop.

They saw it for the first time but were already getting bored to see a bunch of sentences having at most 140 characters each. The only thing they liked to play with it is, closing and opening tweets.

There are N tweets on the page and each tweet can be opened by clicking on it, to see some statistics related to that tweet. Initially all the tweets are closed. Clicking on an open tweet closes it and clicking on a closed tweet opens it. There is also a button to close all the open tweets. Given a sequence of K clicks by Jack, Evan has to guess the total number of open tweets just after each click. Please help Evan in this game.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int count, num;
    string s;
    bool arr[n] = {0};
    while (x--)
    {
        count = 0;
        cin >> s;
        if (s == "CLOSEALL")
        {
            for (int i = 0; i < n; i++)
                arr[i] = 0;
            cout << "0" << endl;
            continue;
        }
        cin >> num;
        arr[num - 1] ^= 1;
        for (int i = 0; i < n; i++)
        {
            if(arr[i])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}