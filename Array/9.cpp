/*
You are participating in a contest which has 1111 problems (numbered 11 through 1111). The first eight problems (i.e. problems 1, 2, \ldots, 81,2,…,8) are scorable, while the last three problems (99, 1010 and 1111) are non-scorable ― this means that any submissions you make on any of these problems do not affect your total score.

Your total score is the sum of your best scores for all scorable problems. That is, for each scorable problem, you look at the scores of all submissions you made on that problem and take the maximum of these scores (or 00 if you didn't make any submissions on that problem); the total score is the sum of the maximum scores you took.

You know the results of all submissions you made. Calculate your total score.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[11] = {0};
        for (int j = 0; j < n; j++)
        {
            int prob_no, prob_score;
            cin >> prob_no >> prob_score;
            if(prob_no < 9)
                arr[prob_no] = max(prob_score, arr[prob_no]);
        }
        int sum = 0;
        for (int k = 1; k < 9; k++)
            sum += arr[k];
        cout << sum << endl;
    }
    return 0;
}