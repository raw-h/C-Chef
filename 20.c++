/*
It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to DD.

Given that the skills of the teams competing in the final are XX and YY respectively, determine whether Chef will find the game interesting or not.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int team_a, team_b, skill_diff;
        cin >> team_a >> team_b >> skill_diff;
        if (abs(team_a - team_b) <= skill_diff)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}