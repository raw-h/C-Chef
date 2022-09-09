/*
Chef wants to order food from a food delivery app. He wishes to order once today, and buy three items costing A_1, A_2A 
1
​
 ,A 
2
​
  and A_3A 
3
​
  rupees, respectively. He'll also order once tomorrow, when he'll buy three items costing B_1, B_2B 
1
​
 ,B 
2
​
  and B_3B 
3
​
  rupees, respectively. There is an additional delivery charge of rupees DD for each order.

He notices that there is a coupon on sale, which costs rupees CC. If he buys that coupon, the delivery charges on any day, on an order of rupees 150150 or more shall be waived (that is, the DD rupees will not be added, if the sum of the costs of the items is \ge 150≥150).

Note that Chef is ordering the three items together on each day, so the delivery charge is charged only once each day. Also, note that it's only needed to buy the coupon once to avail the delivery fee waiver on both days.

Should Chef buy the coupon? Note that Chef shall buy the coupon only if it costs him strictly less than what it costs him without the coupon, in total.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int d, c;
        cin >> d >> c;
        int a_c1, a_c2, a_c3;
        cin >> a_c1 >> a_c2 >> a_c3;
        int b_c1, b_c2, b_c3;
        cin >> b_c1 >> b_c2 >> b_c3;
        int d1_tc = a_c1 + a_c2 + a_c3;
        int d2_tc = b_c1 + b_c2 + b_c3;
        bool f1 = false, f2 = false;
        int count = 0;
        if(d1_tc >= 150){
            f1 = true;
            count++;
        }
        if(d2_tc >= 150){
            f2 = true;
            count++;
        }
        int tc_without_coupon = d1_tc + d2_tc + (count * d);
        int tc_with_coupon = d1_tc + d2_tc + c;
        if(tc_with_coupon < tc_without_coupon)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}