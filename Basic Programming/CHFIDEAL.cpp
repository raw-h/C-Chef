/*
Chef likes probability puzzles a lot, almost as much as interactive problems. Today, he learned about the Monty Hall Paradox.

Suppose that Chef is participating in a game show, where he has to choose between three doors numbered 11 through 33. There is a car behind one of the doors and goats behind the other two. Chef does not know what is behind which door, but there is a game host who knows where the car is.

First, you need to help Chef pick a door (let's denote it by XX). Then, the host opens a different door (let's denote it by YY) such that there is a goat behind this door, and asks Chef to pick an arbitrary door again (let's denote it by ZZ). You need to help Chef pick door ZZ too. You should do it in such a way that the probability of a car being behind door ZZ is maximised. If there are multiple optimal possible ways to pick doors for Chef, you may choose any one.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << 1 << endl;
    int x; 
    cin >> x;
    cout << (x == 2 ? 3 : 2) << endl;
    return 0;
}