/*
You are given the height HH (in metres) and mass MM (in kilograms) of Chef. The Body Mass Index (BMI) of a person is computed as \frac{M}{H^2} 
H 
2
 
M
​
 .

Report the category into which Chef falls, based on his BMI:

Category 1: Underweight if BMI \leq 18≤18
Category 2: Normal weight if BMI \in \{19∈{19, 2020,\ldots…, 24\}24}
Category 3: Overweight if BMI \in \{25∈{25, 2626,\ldots…, 29\}29}
Category 4: Obesity if BMI \geq 30≥30
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        float mass, height;
        cin >> mass >> height;
        float BMI = mass / (height * height);
        if (BMI <= 18)
            cout << 1 << endl;
        else if (BMI <= 24 && BMI >= 19)
            cout << 2 << endl;
        else if (BMI <= 29 && BMI >= 25)
            cout << 3 << endl;
        else if (BMI >= 30)
            cout << 4 << endl;
    }
    return 0;
}