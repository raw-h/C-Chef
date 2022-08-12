/*
In Olympics, the countries are ranked by the total number of medals won. You are given six integers G_1G 
1
​
 , S_1S 
1
​
 , B_1B 
1
​
 , and G_2G 
2
​
 , S_2S 
2
​
 , B_2B 
2
​
 , the number of gold, silver and bronze medals won by two different countries respectively. Determine which country is ranked better on the leaderboard. It is guaranteed that there will not be a tie between the two countries.
 */
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int g1, s1, b1, g2, s2, b2;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        if ((g1 + s1 + b1) > (g2 + b2 + s2))
            cout << "1" << endl;
        else
            cout << "2" << endl;
    }
    return 0;
}
