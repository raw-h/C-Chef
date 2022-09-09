/*
Finally, a COVID vaccine is out on the market and the Chefland government has asked you to form a plan to distribute it to the public as soon as possible. There are a total of NN people with ages a_1, a_2, \ldots, a_Na 
1
​
 ,a 
2
​
 ,…,a 
N
​
 .

There is only one hospital where vaccination is done and it is only possible to vaccinate up to DD people per day. Anyone whose age is \ge 80≥80 or \le 9≤9 is considered to be at risk. On each day, you may not vaccinate both a person who is at risk and a person who is not at risk. Find the smallest number of days needed to vaccinate everyone.


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, d;
        cin >> n >> d;
        int at_risk = 0, low_risk = 0, total_dose = 0;
        int age;
        for (int i = 0; i < n; i++)
        {
            cin >> age;
            if(age <= 9 || age >= 80){
                at_risk++;
            }
            else
                low_risk++;
        }
        while(low_risk > 0){
            total_dose++;
            low_risk -= d;
        }
        while (at_risk > 0)
        {
            total_dose++;
            at_risk -= d;
        }
        cout << total_dose << endl;
    }
    return 0;
}