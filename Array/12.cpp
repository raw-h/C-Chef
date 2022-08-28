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
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        string str;
        cin >> str;
        int count = 0;
        bool flag = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (str[j] == str[j + 1])
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            count = n + 1;
        else
        {
            for (int j = 0; j < n; j++)
            {
                if ((str[j] == 'R' && str[j + 1] != 'L') || (str[j] == 'L' && str[j + 1] != 'R'))
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}