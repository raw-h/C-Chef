/*
Chef has been working in a restaurant which has NN floors. He wants to minimise the time it takes him to go from the NN-th floor to ground floor. He can either take the elevator or the stairs.

The stairs are at an angle of 4545 degrees and Chef's velocity is V_1V 
1
​
  m/s when taking the stairs down. The elevator on the other hand moves with a velocity V_2V 
2
​
  m/s. Whenever an elevator is called, it always starts from ground floor and goes to NN-th floor where it collects Chef (collecting takes no time), and makes its way down to the ground floor with Chef in it.

The elevator covers a total distance equal to NN meters when going from NN-th floor to ground floor or vice versa, while the length of the stairs is N*\sqrt 2N∗ 
2
​
  because the stairs is at angle 4545 degrees.

Chef has enlisted your help to decide whether he should use stairs or the elevator to minimise his travel time. Can you help him out?
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float n, v1, v2;
        cin >> n >> v1 >> v2;
        float time1, time2;
        time1 = (n * 1.41421356237) / v1;
        time2 = (n / v2) * 2;
        if (time1 < time2)
            cout << "Stairs" << endl;
        else
            cout << "Elevator" << endl;
    }
    
    return 0;
}