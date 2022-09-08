/*
There are NN people on a street (numbered 11 through NN). For simplicity, we'll view them as points on a line. For each valid ii, the position of the ii-th person is X_iX 
i
​
 .

It turns out that exactly one of these people is infected with the virus COVID-19, but we do not know which one. The virus will spread from an infected person to a non-infected person whenever the distance between them is at most 22. If we wait long enough, a specific set of people (depending on the person that was infected initially) will become infected; let's call the size of this set the final number of infected people.

Your task is to find the smallest and largest value of the final number of infected people, i.e. this number in the best and in the worst possible scenario.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int people[n + 1];
        int best_case = INT_MAX;
        int worst_case = INT_MIN;
        for (int i = 0; i < n; i++)
            cin >> people[i];
        int cases = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if ((people[i + 1] - people[i]) <= 2)
                cases++;
            else
            {
                best_case = min(cases, best_case);
                worst_case = max(cases, worst_case);
                cases = 1;
            }
        }
        best_case = min(cases, best_case);
        worst_case = max(cases, worst_case);
        cout << best_case << " " << worst_case << endl;
    }
    return 0;
}