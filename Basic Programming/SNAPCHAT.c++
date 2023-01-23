/*
The most popular feature on snapchat is Snapchat Streak.
A streak is maintained between two people if both of them send at least one snap to each other daily.
If, on any day, either person forgets to send at least one snap, the streak breaks and the streak count is set to
0
0.

Chef and Chefina like maintaining their snapchat streak. You observed the snap count of both of them for
�
N consecutive days.
On the
�
�
ℎ
i
th
  day, Chef sent
�
�
A
i
​
  snaps to Chefina while Chefina sent
�
�
B
i
​
  snaps to Chef.

Find the maximum streak count they achieved in those
�
N days.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int chef[n], chefina[n];
        for(int i = 0; i < n; i++)
            cin >> chef[i];
        for (int i = 0; i < n; i++)
            cin >> chefina[i];
        int streak = 0;
        int max_streak = 0;
        for(int i = 0; i < n; i++){
            if(chefina[i] != 0 && chef[i] != 0)
                streak++;
            else
                streak = 0;
            max_streak = max(max_streak, streak);
        }
        cout << max_streak << endl;
    }
    return 0;
}