#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int seat_no;
        cin >> seat_no;
        if (seat_no <= 50)
            cout << "LEFT" << endl;
        else
            cout << "RIGHT" << endl;
    }
    return 0;
}
