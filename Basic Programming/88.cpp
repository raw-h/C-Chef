#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int limak, bob, n1 = 1, n2;
        cin >> limak >> bob;
        bool flag1 = 0, flag2 = 0;
        for (int j = 0; j <= 1000; j++)
        {
            n2 = n1 + 1;
            cout << "n2 "<< n2 << endl;
            if(bob < n2){
                flag2 = 1;
                break;
            }
            limak -= n1;
            bob -= n2;
            n1++;
            cout << n1 << endl;
            cout << "Limak " << limak << endl;
            if(limak < n1){
                flag1 = 1;
                break;
            }
        }
        if(flag1)
            cout << "Bob" << endl;
        else
            cout << "Limak" << endl;
    }
    return 0;
}
