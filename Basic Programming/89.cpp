/*
Chef decided to buy a new tablet. His budget is BB, so he cannot buy a tablet whose price is greater than BB. Other than that, he only has one criterion — the area of the tablet's screen should be as large as possible. Of course, the screen of a tablet is always a rectangle.

Chef has visited some tablet shops and listed all of his options. In total, there are NN available tablets, numbered 11 through NN. For each valid ii, the ii-th tablet has width W_iW 
i
​
 , height H_iH 
i
​
  and price P_iP 
i
​
 .

Help Chef choose a tablet which he should buy and find the area of such a tablet's screen, or determine that he cannot buy any tablet.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int no_of_tablet, budget;
        cin >> no_of_tablet >> budget;
        int max_size = INT_MIN;
        bool flag = 0;
        for (int j = 0; j < no_of_tablet; j++)
        {
            int width, height, price;
            cin >> width >> height >> price;
            int size = width * height;
            if(price <= budget){
                if(size > max_size){
                    max_size = max(max_size, size);
                    flag = 1;
                }
            }
        }
        if(flag)
            cout << max_size << endl;
        else
            cout << "no tablet" << endl;
    }
    return 0;
}