/*
In a company an emplopyee is paid as under: If his basic salary is less than Rs. 1500, then HRA = 10% of base salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the Employee's salary is input, write a program to find his gross salary.

NOTE: Gross Salary = Basic Salary + HRA + DA
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float salary;
        cin >> salary;
        float g_salary = 0;
        if (salary < 1500)
        {
            float HRA = 0.1 * salary;
            float DA = ((90 * salary) / 100);
            g_salary = salary + HRA + DA;
        }
        else
        {
            float DA = ((98 * salary) / 100);
            g_salary = salary + 500 + DA;
        }
        cout << fixed << setprecision(2) << g_salary << endl;
    }
    return 0;
}
