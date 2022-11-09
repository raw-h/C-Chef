/*
The Little Elephant from the Zoo of Lviv currently is on the military mission. There are N enemy buildings placed in a row and numbered from left to right strating from 0. Each building i (except the first and the last) has exactly two adjacent buildings with indices i-1 and i+1. The first and the last buildings have just a single adjacent building.

Some of the buildings contain bombs. When bomb explodes in some building it destroys it and all adjacent to it buildings.

You are given the string S of length N, where Si is 1 if the i-th building contains bomb, 0 otherwise. Find for the Little Elephant the number of buildings that will not be destroyed after all bombs explode. Please note that all bombs explode simultaneously.
*/
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            if (s[0] == '0')
            {
                cout << 1 << endl;
            }
            else
            {
                cout << "0" << endl;
            }
            continue;
        }
        int cnt = 0;
        if (s[0] == '0' && s[1] == '0')
            cnt++;
        if (s[s.size() - 1] == '0' && s[s.size() - 2] == '0')
            cnt++;
        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == '0' && s[i - 1] == '0' && s[i + 1] == '0')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
