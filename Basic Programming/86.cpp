/*
Chef is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented by integers here.

Currently, Chef has to use a language with two given features AA and BB. He has two options --- switching to a language with two features A_1A 
1
​
  and B_1B 
1
​
 , or to a language with two features A_2A 
2
​
  and B_2B 
2
​
 . All four features of these two languages are pairwise distinct.

Tell Chef whether he can use the first language, the second language or neither of these languages (if no single language has all the required features).
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        bool flag = 0;
        bool second_flag = 1;
        if (a == a1)
        {
            if (b == b1){
                flag = 1;
                second_flag = 0;
            }
        }
        else if (b == a1)
        {
            if (a == b1){
                flag = 1;
                second_flag = 0;
            }
        }

        if (flag)
            cout << 1 << endl;
        flag = 0;
        if (a == a2)
        {
            if (b == b2){
                flag = 1;
                second_flag = 0;
            }
        }
        else if (b == a2)
        {
            if (a == b2){
                flag = 1;
                second_flag = 0;
            }
        }
        if (flag)
            cout << 2 << endl;
        if(second_flag)
            cout << 0 << endl;
    }
    return 0;
}
