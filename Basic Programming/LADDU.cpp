/*
You might have heard about our new goodie distribution program aka the "Laddu Accrual System". This problem is designed to give you a glimpse of its rules. You can read the page once before attempting the problem if you wish, nonetheless we will be providing all the information needed here itself.

Laddu Accrual System is our new goodie distribution program. In this program, we will be distributing Laddus in place of goodies for your winnings and various other activities (described below), that you perform on our system. Once you collect enough number of Laddus, you can then redeem them to get yourself anything from a wide range of CodeChef goodies.

Let us know about various activities and amount of laddus you get corresponding to them.

Contest Win (CodeChef’s Long, Cook-Off, LTIME, or any contest hosted with us) : 300 + Bonus (Bonus = 20 - contest rank). Note that if your rank is > 20, then you won't get any bonus.
Top Contributor on Discuss : 300
Bug Finder : 50 - 1000 (depending on the bug severity). It may also fetch you a CodeChef internship!
Contest Hosting : 50
You can do a checkout for redeeming laddus once a month. The minimum laddus redeemable at Check Out are 200 for Indians and 400 for the rest of the world.

You are given history of various activities of a user. The user has not redeemed any of the its laddus accrued.. Now the user just wants to redeem as less amount of laddus he/she can, so that the laddus can last for as long as possible. Find out for how many maximum number of months he can redeem the laddus.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string origin;
        cin >> origin;
        string activities[n];
        int laddu = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> activities[i];
            if(activities[i] == "CONTEST_WON"){
                int rank;
                cin >> rank;
                if(rank <= 20)
                    laddu += 300 + (20 - rank);
                else
                    laddu += 300;
            }
            else if(activities[i] == "BUG_FOUND"){
                int severity;
                cin >> severity;
                laddu += severity;
            }
            else if(activities[i] == "TOP_CONTRIBUTOR")
                laddu += 300;
            else if(activities[i] == "CONTEST_HOSTED")
                laddu += 50;
        }
        if(origin == "INDIAN")
            laddu /= 200;
        else if(origin == "NON_INDIAN")
            laddu /= 400;
        cout << laddu << endl;
    }
    return 0;
}