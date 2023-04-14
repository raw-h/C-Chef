#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;
        vector<int> days;
        long long taxi_days = 0;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            days.push_back(y);
            if ((y == 1) || (days[i - 1] == 1))
                taxi_days++;
        }
        long long answer = taxi_days * x;
        cout << answer << endl;
    }
    return 0;
}
