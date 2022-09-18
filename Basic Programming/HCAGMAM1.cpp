/*
Given the schedule of Chef for 3030 days (A binary string of length 3030 where '0' denotes that Chef was on leave and '1' denotes Chef was working on that day). Chef gets X-X− Rs for every day he worked. As working continuously for a long time is hectic so Company introduced the following policy to give a bonus to its employees.

The company will check the longest streak for which an employee has worked and will award Y-Y− Rs for every day of that streak as a bonus. Calculate the salary received by Chef (including the bonus).

Note: Rs represents the currency of Chefland, and if there are two or more longest streaks of the same length, only one is counted for the bonus.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        string month;
        cin >> month;
        int normal_days = 0;
        int max_streak = INT_MIN;
        int streak = 0;
        for (int i = 0; i < month.length(); i++)
        {
            if(month[i] == '1'){
                normal_days++;
                streak++;
                max_streak = max(streak, max_streak);
            }
            else
                streak = 0;
        }
        cout << (normal_days * x) + (max_streak * y) << endl;
    }
    return 0;
}