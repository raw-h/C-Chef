/*
Chef has AA units of solid and BB units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?

A mixture is called :

A solution if A \gt 0A>0 and B \gt 0B>0,

A solid if B = 0B=0, or

A liquid if A = 0A=0.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a > 0 && b > 0)
            cout << "Solution" << endl;
        else if (b == 0)
            cout << "Solid" << endl;
        else if (a == 0)
            cout << "Liquid" << endl;
    }
    return 0;
}
