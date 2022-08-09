/*
Alice has recently learned in her economics class that the market is said to be in equilibrium when the supply is equal to the demand.

Alice has market data for NN time points in the form of two integer arrays SS and DD. Here, S_iS 
i
​
  denotes the supply at the i^{th}i 
th
  point of time and D_iD 
i
​
  denotes the demand at the i^{th}i 
th
  point of time, for each 1 \leq i \leq N1≤i≤N.

Help Alice in finding out the number of time points at which the market was in equilibrium.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int count = 0;
        int s[n];
        int d[n];
        for (int j = 0; j < n; j++)
            cin >> s[j];

        for (int j = 0; j < n; j++)
            cin >> d[j];
        
        for (int j = 0; j < n; j++)
        {
            if (s[j] == d[j])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
