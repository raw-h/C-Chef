/*
There are 22 trains AA and BB and NN stations in a line from 11 to NN in order. There is also an array PP of length N-1N−1 such that P_iP 
i
​
  (1\le i \lt N)(1≤i<N) denotes the amount of time any train takes to go from the ii-th station to the (i+1)(i+1)-th station.

Initially, both trains are at station 11. Train AA departs from station 11 and stops directly at station NN. For safety purposes, it is maintained that train BB cannot depart from station ii unless train AA has already reached station (i+1)(i+1) (1 \le i \lt N)(1≤i<N).

Find the minimum time after which train BB reaches station NN, once train AA departs from station 11.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int time_taken[n-1];
        int max_time = INT_MIN;
        for(int i = 0; i < n - 1; i++){
            cin >> time_taken[i];
            max_time = max(max_time, time_taken[i]);
        }
        int total_time = 0;
        for(int i = 0; i < n - 1; i++)
            total_time += time_taken[i];
        total_time += max_time;
        cout << total_time << endl;
    }
    return 0;
}