/*
A certain type of steel is graded according to the following conditions.

Hardness of the steel must be greater than 50
Carbon content of the steel must be less than 0.7
Tensile strength must be greater than 5600
The grades awarded are as follows:

Grade is 10 if all three conditions are met
Grade is 9 if conditions (1) and (2) are met
Grade is 8 if conditions (2) and (3) are met
Grade is 7 if conditions (1) and (3) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the three conditions are met
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int hardness, c_content, t_strnth;
        cin >> hardness >> c_content >> t_strnth;
        if(hardness > 50 && c_content < 0.7){
            if(t_strnth > 5600)
                cout << "10" << endl;
            else 
                cout << "9" << endl;
        }
        else if(c_content < 0.7 && t_strnth > 5600){
            cout << "8" << endl;
        }
        else if(hardness > 50 && t_strnth > 5600){
            cout << "7" << endl;
        }
        else if(hardness > 50 || c_content < 0.7 || t_strnth > 5600){
            cout << "6" << endl;
        }
        else{
            cout << "5" << endl;
        } 
    }
    return 0;
}