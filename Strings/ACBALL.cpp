/*
Akhil has many balls of white and black colors. One day, he was playing with them. During the play, he arranged the balls into two rows both consisting of N number of balls. These two rows of balls are given to you in the form of strings X, Y. Both these string consist of 'W' and 'B', where 'W' denotes a white colored ball and 'B' a black colored.

Other than these two rows of balls, Akhil has an infinite supply of extra balls of each color. he wants to create another row of N balls, Z in such a way that the sum of hamming distance between X and Z, and hamming distance between Y and Z is maximized.

Hamming Distance between two strings X and Y is defined as the number of positions where the color of balls in row X differs from the row Y ball at that position. e.g. hamming distance between "WBB", "BWB" is 2, as at position 1 and 2, corresponding colors in the two strings differ.

.
As there can be multiple such arrangements of row Z, Akhil wants you to find the lexicographically smallest arrangement which will maximize the above value.
*/
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string a;
        string b;
        string c;
        cin >> a;
        cin >> b;
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                if (a[i] == 'W')
                {
                    c += 'B';
                }
                else
                {
                    c += 'W';
                }
            }
            else
            {
                c += 'B';
            }
        }
        cout << c << endl;
    }
    return 0;
}
