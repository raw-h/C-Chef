/*
The game of billiards involves two players knocking 3 balls around on a green baize table. Well, there is more to it, but for our purposes this is sufficient.

The game consists of several rounds and in each round both players obtain a score, based on how well they played. Once all the rounds have been played, the total score of each player is determined by adding up the scores in all the rounds and the player with the higher total score is declared the winner.

The Siruseri Sports Club organises an annual billiards game where the top two players of Siruseri play against each other. The Manager of Siruseri Sports Club decided to add his own twist to the game by changing the rules for determining the winner. In his version, at the end of each round, the cumulative score for each player is calculated, and the leader and her current lead are found. Once all the rounds are over the player who had the maximum lead at the end of any round in the game is declared the winner.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int p1[n];
    int p2[n];
    
    int cum_score1 = 0;
    int cum_score2 = 0;
    
    int lead = 0;
    int ans = INT_MIN;
    
    int leader = 0;
    
    for (int i = 0; i < n; i++){
        cin >> p1[i] >> p2[i];

        cum_score1 += p1[i];
        cum_score2 += p2[i];

        if(cum_score1 >= cum_score2){
            ans = cum_score1 - cum_score2;
            if (ans >= lead)
                leader = 1;
            
        }
        else{
            ans = cum_score2 - cum_score1;
            if (ans >= lead)
                leader = 2;
        }
        lead = max(lead, ans);
    }
    cout << leader << " " << lead << endl;
    return 0;
}