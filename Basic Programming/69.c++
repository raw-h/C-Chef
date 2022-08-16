/*
It's the soccer match finals in Chefland and as always it has reached the penalty shotouts. Each team is given 55 shots to make and the team scoring a goal on the maximum number of shots wins the game. If both the teams' scores are equal, then the game is considered a draw and we would have 22 champions.

Given ten integers A_1, A_2, \ldots, A_{10}A 
1
​
 ,A 
2
​
 ,…,A 
10
​
 , where the odd indexed integers(A_1, A_3,A 
1
​
 ,A 
3
​
 , A_5,A 
5
​
 , A_7, A_9A 
7
​
 ,A 
9
​
 ) represent the outcome of the shots made by team 11 and even indexed integers(A_2, A_4, A_6, A_8, A_{10}A 
2
​
 ,A 
4
​
 ,A 
6
​
 ,A 
8
​
 ,A 
10
​
 ) represent the outcome of the shots made by team 22 (here A_i = 1A 
i
​
 =1 indicates that it's a goal and A_i = 0A 
i
​
 =0 indicates a miss), determine the winner or find if the game ends in a draw.
 */
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a[10];
        for (int i = 0; i < 10; i++)
            cin >> a[i];
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < 10; i = i + 2)
            sum1 += a[i];
        for (int i = 1; i < 10; i = i + 2)
            sum2 += a[i];
        if (sum1 == sum2)
            cout << "0" << endl;
        else if (sum1 > sum2)
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}
