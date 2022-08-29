/*
Chef has bought a new robot, which will be used for delivering dishes to his customers. He started testing the robot by letting it move on a line.

Initially, the robot is placed at the coordinate x = Xx=X. Then, it should execute a sequence of NN commands, described by a string SS with length NN. Each character of this string is either 'L' or 'R', denoting that the robot should walk one step to the left (decreasing xx by 11) or to the right (increasing xx by 11), respectively.

How many distinct points are visited by the robot when it has executed all the commands? A point pp is visited by the robot if pp is an integer and the robot's position before or after executing some command is x = px=p.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        char s[n];
        int p[n + 1];
        p[0] = x;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] == 'R')
            {
                p[i + 1] = p[i] + 1;
            }
            else
            {
                p[i + 1] = p[i] - 1;
            }
        }
        for (int i = 1; i < n + 1; i++)
        {
            int flag = 0;
            for (int j = 0; j < i; j++)
            {
                if (p[j] == p[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                ans++;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}