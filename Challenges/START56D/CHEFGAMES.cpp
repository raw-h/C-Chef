/*
In Chefland, a tennis game involves 44 referees.
Each referee has to point out whether he considers the ball to be inside limits or outside limits. The ball is considered to be IN if and only if all the referees agree that it was inside limits.

Given the decision of the 44 referees, help Chef determine whether the ball is considered inside limits or not.
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int in_out;
	    bool flag = 0;
	    for (int i = 0; i < 4; i++) {
	        cin >> in_out;
	        if(in_out == 1)
	            flag = 1;
	    }
	    if(flag == 1)
	        cout << "OUT" << endl;
	    else 
	        cout << "IN" << endl;
	}
	return 0;
}
