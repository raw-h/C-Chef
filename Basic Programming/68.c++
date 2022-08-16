/*
You have three shoes of the same size lying around. Each shoe is either a left shoe (represented using 00) or a right shoe (represented using 11). Given AA, BB, CC, representing the information for each shoe, find out whether you can go out now, wearing one left shoe and one right shoe.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        if (sum != 3 && sum != 0)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}
