/*
Tanu has got interested in signs and gestures that we use for communication. One such gesture is the head-bob.
When we want to signal "Yes" to someone, we move the head up-and-down. For "No", the head is moved left-and-right, rotating about the vertical axis.
There is a peculiar way of gesturing "Yes", commonly seen in India, by moving head sideways (rotating about the forward-back axis). This is called the Indian head-bob.

Tanu observed many people on the railways station, and made a list of gestures that they made. Usual "Yes" gesture is recorded as "Y", no as "N" and Indian "Yes" gesture as "I". (Assume no foreigner uses the Indian "Yes" gesture and vice-versa). Identify which of them were Indians, which were not Indian, and which one you cannot be sure about.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        bool flag1 = 0, flag2 = 0;
        for (int j = 0; j < n; j++)
        {
            if(str[j] == 'Y'){
                flag1 = 1;
                break;
            }
            else if(str[j] == 'I'){
                flag2 = 1;
                break;
            }
        }
        if(flag1)
            cout << "NOT INDIAN" << endl;
        else if(flag2)
            cout << "INDIAN" << endl;
        else
            cout << "NOT SURE" << endl;
    }
    
    return 0;
}