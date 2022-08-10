/*
Given the time control of a chess match as a + ba+b, determine which format of chess out of the given 44 it belongs to.

1)1) Bullet if a + b \lt 3a+b<3

2)2) Blitz if 3 \leq a + b \leq 103≤a+b≤10

3)3) Rapid if 11 \leq a + b \leq 6011≤a+b≤60

4)4) Classical if 60 \lt a + b60<a+b
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int a, b;
	    cin >> a >> b;
	    if((a + b) < 3)
	        cout << 1 << endl;
	    else if((a + b) <= 10 && (a + b) >= 3)
	        cout << 2 << endl;
	    else if((a + b) <= 60 && (a + b) >= 11)
	        cout << 3 << endl;
	    else if(a + b > 60)
	        cout << 4 << endl;
	}
	return 0;
}
