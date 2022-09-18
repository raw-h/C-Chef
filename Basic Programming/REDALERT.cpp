/*
Finally a monsoon has come. According to the Meteorological Department, there will be rain in the upcoming NN days in the city. Initially, the water level of the city is zero millimetres. The amount of rain on the ii-th day can be described by an integer A_iA 
i
​
  as follows:

If A_i \gt 0A 
i
​
 >0, the water level of the city increases by A_iA 
i
​
  millimetres on the ii-th day.
If A_i = 0A 
i
​
 =0, there is no rain on the ii-th day. The water level of the city decreases by DD millimetres on such a day. However, if the water level is less than DD millimetres before the ii-th day, then it becomes zero instead.
There will be a red alert in the city if the water level becomes strictly greater than HH millimetres on at least one of the NN days. Determine if there will be a red alert.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, d, h;
        cin >> n >> d >> h;
        int rain[n];
        int max_rain = 0;
        bool flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> rain[i];
            if(rain[i] > 0){
                max_rain += rain[i];
                if(max_rain > h)
                    flag = 1;
            }
            else if(rain[i] == 0){
                max_rain -= d;
                if(max_rain <= 0)
                    max_rain = 0;
            }
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}