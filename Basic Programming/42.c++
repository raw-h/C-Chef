/*
The weather report of Chefland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.

Given 77 integers A_1, A_2, A_3, A_4, A_5, A_6, A_7A 
1
​
 ,A 
2
​
 ,A 
3
​
 ,A 
4
​
 ,A 
5
​
 ,A 
6
​
 ,A 
7
​
  where A_i = 1A 
i
​
 =1 denotes that the i^{th}i 
th
  day of week in Chefland is a sunny day, A_i = 0A 
i
​
 =0 denotes that the i^{th}i 
th
  day in Chefland is a rainy day. Determine if the weather report of Chefland is Good or not.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int arr[7] = {0};
        int sunny = 0;
        int rainy = 0;
        for (int j = 0; j < 7; j++)
        {
            cin >> arr[j];
            if (arr[j] == 1)
                sunny++;
            else
                rainy++;
        }
        if (sunny > rainy)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}
