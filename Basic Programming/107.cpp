/*Chef wants to prepare a Cook-Off contest with 5 problems chosen from a set of N problems. He has marked the difficulty of each problem within a range identified by one of the following strings: "cakewalk", "simple", "easy", "easy-medium", "medium", "medium-hard", "hard". According to this page, a Cook-Off contest must have problems of the following difficulties:

exactly one "cakewalk";
exactly one "simple";
exactly one "easy";
one "easy-medium" or one "medium";
one "medium-hard" or one "hard".
Given the information about the N problems, can you advise Chef if it's possible to pick 5 problems and form a valid Cook-Off contest?
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
        string difficulty[n];
        for (int i = 0; i < n; i++)
        {
            cin >> difficulty[i];
        }
        int arr[5] = {0};
        for (int i = 0; i < n; i++)
        {
            if(difficulty[i] == "easy")
                arr[0] = 1;
            else if(difficulty[i] == "cakewalk")
                arr[1] = 1;
            else if(difficulty[i] == "simple")
                arr[2] = 1;
            else if(difficulty[i] == "easy-medium" || difficulty[i] == "medium")
                arr[3] = 1;
            else if(difficulty[i] == "medium-hard" || difficulty[i] == "hard")
                arr[4] = 1;
        }
        int sum = 0;
        for (int i = 0; i < 5; i++)
            sum += arr[i];
        if(sum == 5)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}