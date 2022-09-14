/*
For her next karate demonstration, Ada will break some bricks.

Ada stacked three bricks on top of each other. Initially, their widths (from top to bottom) are W_1, W_2, W_3W 
1
​
 ,W 
2
​
 ,W 
3
​
 .

Ada's strength is SS. Whenever she hits a stack of bricks, consider the largest k \ge 0k≥0 such that the sum of widths of the topmost kk bricks does not exceed SS; the topmost kk bricks break and are removed from the stack. Before each hit, Ada may also decide to reverse the current stack of bricks, with no cost.

Find the minimum number of hits Ada needs in order to break all bricks if she performs the reversals optimally. You are not required to minimise the number of reversals.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int strength, w1, w2, w3;
        cin >> strength >> w1 >> w2 >> w3;
        int count = 0;
        int widths = w1 + w2 + w3;
        if(strength >= widths)
            cout << 1 << endl;
        else if((strength >= w1 + w2) || (strength >= w2 + w3))
            cout << 2 << endl;
        else 
            cout << 3 << endl;
    }
    return 0;
}