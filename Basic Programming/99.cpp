/*
Chef, being a Chess fan, was thrilled after he read the following news:

Michael Simkin, a postdoctoral fellow at Harvard University’s Center of Mathematical Sciences and Applications proved that for a large value of NN, there are approximately (0.143 \cdot N)^N(0.143⋅N) 
N
  configurations in which NN queens can be placed on a N \times NN×N chessboard so that none attack each other.

Although the formula is valid for large NN, Chef is interested in finding the value of function f(N)f(N) = (0.143 \cdot N)^N(0.143⋅N) 
N
  for a given small value of NN. Since Chef is busy understanding the proof of the formula, please help him calculate this value.

Print the answer rounded to the nearest integer. That is, if the actual value of f(N)f(N) is xx,

Print \lfloor x\rfloor⌊x⌋ if x - \lfloor x\rfloor \lt 0.5x−⌊x⌋<0.5
Otherwise, print \lfloor x\rfloor + 1⌊x⌋+1
where \lfloor x\rfloor⌊x⌋ denotes the floor of xx.
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        double n;
        cin >> n;
        double x = pow((0.143 * n),n);
        cout << round(x) << endl;
    }
    return 0;
}