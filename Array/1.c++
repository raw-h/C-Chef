/*
Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.

Our Chef took the above advice very seriously and decided to set a target for himself.

Chef decides to solve at least 1010 problems every week for 44 weeks.
Given the number of problems he actually solved in each week over 44 weeks as P_1, P_2, P_3,P 
1
​
 ,P 
2
​
 ,P 
3
​
 , and P_4P 
4
​
 , output the number of weeks in which Chef met his target.
 */
#include <iostream>
using namespace std;

int main() {
	int arr[4];
	int count = 0;
	for (int i = 0; i < 4; i++) {
	    cin >> arr[i];
	    if(arr[i] >= 10)
	        count++;
	}
	cout << count << endl;
	return 0;
}
