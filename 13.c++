/*
The Chef has reached the finals of the Annual Inter-school Declamation contest.

For the finals, students were asked to prepare 1010 topics. However, Chef was only able to prepare three topics, numbered AA, BB and CC — he is totally blank about the other topics. This means Chef can only win the contest if he gets the topics AA, BB or CC to speak about.

On the contest day, Chef gets topic XX. Determine whether Chef has any chances of winning the competition
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    if ((x == a) || (x == b) || (x == c))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}