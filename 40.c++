/*
Chef has an exam which will start exactly MM minutes from now. However, instead of preparing for his exam, Chef started watching Season-11 of Superchef. Season-11 has NN episodes, and the duration of each episode is KK minutes.

Will Chef be able to finish watching Season-11 strictly before the exam starts?
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int m, n, k;
        cin >> m >> n >> k;
        if ((n * k) < m)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
