/*
Digory Kirke and Polly Plummer are two kids living next door to each other. The attics of the two houses are connected to each other through a passage. Digory's Uncle Andrew has been secretly doing strange things in the attic of his house, and he always ensures that the room is locked. Being curious, Digory suspects that there is another route into the attic through Polly's house, and being curious as kids always are, they wish to find out what it is that Uncle Andrew is secretly up to.

So they start from Polly's house, and walk along the passageway to Digory's. Unfortunately, along the way, they suddenly find that some of the floorboards are missing, and that taking a step forward would have them plummet to their deaths below.

Dejected, but determined, they return to Polly's house, and decide to practice long-jumping in the yard before they re-attempt the crossing of the passage. It takes them exactly one day to master long-jumping a certain length. Also, once they have mastered jumping a particular length L, they are able to jump any amount less than equal to L as well.

The next day they return to their mission, but somehow find that there is another place further up the passage, that requires them to jump even more than they had practiced for. So they go back and repeat the process.

Note the following:

At each point, they are able to sense only how much they need to jump at that point, and have no idea of the further reaches of the passage till they reach there. That is, they are able to only see how far ahead is the next floorboard.
The amount they choose to practice for their jump is exactly the amount they need to get across that particular part of the passage. That is, if they can currently jump upto a length L0, and they require to jump a length L1(> L0) at that point, they will practice jumping length L1 that day.
They start by being able to "jump" a length of 1.
Find how many days it will take them to cross the passageway. In the input, the passageway is described as a string P of '#'s and '.'s. A '#' represents a floorboard, while a '.' represents the absence of a floorboard. The string, when read from left to right, describes the passage from Polly's house to Digory's, and not vice-versa.
*/
#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    long long t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long c = 0, ans = 0, x = 0;
        for (int i = 0; i < s.size();)
        {
            if (s[i] == '.')
            {
                c = 0;
                while (s[i] == '.')
                {
                    c++;
                    i++;
                }
            }
            else
            {
                if (c > ans)
                {
                    x++;
                    ans = c;
                }
                i++;
            }
        }
        cout << x << endl;
    }
    return 0;
}
