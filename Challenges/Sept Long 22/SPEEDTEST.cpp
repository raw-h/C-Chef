/*
Alice is driving from her home to her office which is AA kilometers away and will take her XX hours to reach.
Bob is driving from his home to his office which is BB kilometers away and will take him YY hours to reach.

Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        float a_dist, a_time, b_dist, b_time;
        cin >> a_dist >> a_time >> b_dist >> b_time;
        float a_speed = a_dist / a_time;
        float b_speed = b_dist / b_time;
        if(a_speed > b_speed)
            cout << "Alice" << endl;
        else if(a_speed == b_speed)
            cout << "Equal" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}