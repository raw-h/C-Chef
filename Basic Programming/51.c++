/*
Recently, Devendra went to Goa with his friends. Devendra is well known for not following a budget.

He had Rs. ZZ at the start of the trip and has already spent Rs. YY on the trip. There are three kinds of water sports one can enjoy, with prices Rs. AA, BB, and CC. He wants to try each sport at least once.

If he can try all of them at least once output YES, otherwise output NO.
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int init_amt, spent_amt, spt_a, spt_b, spt_c;
	    cin >> init_amt >> spent_amt >> spt_a >> spt_b >> spt_c;
	    if((init_amt - spent_amt) >= (spt_a + spt_b + spt_c))
	        cout << "YES" << endl;
	    else 
	        cout << "NO" << endl;
	}
	return 0;
}
