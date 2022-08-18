/*
Vasya likes the number 239239. Therefore, he considers a number pretty if its last digit is 22, 33 or 99.

Vasya wants to watch the numbers between LL and RR (both inclusive), so he asked you to determine how many pretty numbers are in this range. Can you help him?
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int l, r;
        cin >> l >> r;
        int count = 0;
        for (int j = l; j <= r; j++)
        {
            if ((j % 10 == 2) || (j % 10 == 3) || (j % 10 == 9))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
