/*
Once upon a time, there was a hero and an old saint. And like in any story with a hero and an old saint, the old saint asked the hero — three questions!

But here's the twist: each question was a binary question, which means that the answer to each must be either a 'Yes' or a 'No', not none, not both. Our hero, who was not so wise in the ways of science, answered them arbitrarily and just hoped he is correct. The old saint, being so old, does not remember which answers were correct. The only thing that he remembers is - how many of them were 'Yes', and how many of them were 'No'. Our hero will pass the test if the old saint cannot distinguish his responses from the set of correct answers i.e. if the number of 'Yes' and 'No' in the responses matches that in the correct answers, regardless of their order.

You are given the answers to each of the three questions, and the responses of the hero to the same. Find whether the hero will be able to pass the old saint's test.
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        int b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        int sum_saint = a1 + a2 + a3;
        int sum_hero = b1 + b2 + b3;
        if (sum_saint == sum_hero)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }
    return 0;
}
