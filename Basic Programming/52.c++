/*
Chef prepared a problem. The admin has rated this problem for xx points.

A problem is called :

Easy if 1 \leq x \lt 1001≤x<100

Medium if 100 \leq x \lt 200100≤x<200

Hard if 200 \leq x \leq 300200≤x≤300

Find the category to which Chef’s problem belongs.


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        if(a >= 1 && a < 100)
            cout << "Easy" << endl;
        else if(a >= 100 && a < 200)
            cout << "Medium" << endl;
        else
            cout << "Hard" << endl;            
    }
    return 0;
}