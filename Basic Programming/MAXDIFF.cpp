/*
Chef prepared two dishes yesterday. Chef had assigned the \textbf{tastiness}tastiness T_1T 
1
​
  and T_2T 
2
​
  to the first and to the second dish respectively. The tastiness of the dishes can be any \textbf{integer}integer between 00 and NN (both inclusive).

Unfortunately, Chef has forgotten the values of T_1T 
1
​
  and T_2T 
2
​
  that he had assigned to the dishes. However, he remembers the sum of the tastiness of both the dishes - denoted by SS.

Chef wonders, what can be the maximum possible absolute difference between the tastiness of the two dishes. Can you help the Chef in finding the maximum absolute difference?

It is guaranteed that at least one pair \{T_1, T_2\}{T 
1
​
 ,T 
2
​
 } exist such that T_1 + T_2 = S, 0 \leq T_1, T_2 \leq NT 
1
​
 +T 
2
​
 =S,0≤T 
1
​
 ,T 
2
​
 ≤N.
 */
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        
        int n, s;
        cin >> n >> s;
        int diff = 0;
        if(n == s){
            diff = s;
        }
        else if(n > s){
            diff = s;
        }
        else if(n < s){
            int t1 = n;
            int t2 = s - n;
            diff = abs(t2 - t1);
        }
        cout << diff << endl;
    }
	return 0;
}
