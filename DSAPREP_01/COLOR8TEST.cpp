/*
Rubik’s cube has six sides in colors: white, blue, green, yellow, red, and orange. A liter of paint costs
�
1
,
�
2
,
�
3
,
�
4
,
�
5
,
�
6
X
1
​
 ,X
2
​
 ,X
3
​
 ,X
4
​
 ,X
5
​
 ,X
6
​
  dollars for each color. Each side of the cube needs half a liter of paint to be painted. How much will you pay for coloring
�
N unpainted cubes?
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int white, blue, green, yellow, red, orange;
        double cubes;
        cin >> cubes >> white >> blue >> green >> yellow >> red >> orange;
        double litres = ceil(cubes / 2.0);
        long long int ans = (white + blue + green + yellow + red + orange) * litres;
        cout << ans << endl;
    }
    return 0;
}