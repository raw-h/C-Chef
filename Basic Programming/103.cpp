/*
There are NN workers; each worker is of one of the following three types:

A translator translates some text from Chef's language to another langague.
An author writes some text in Chef's language.
An author-translator can both write a text in Chef's language and translate it to another language.
Chef wants to have some text written and translated into some language (different from Chef's language). Chef can't do either of those tasks, but he can hire workers. For each ii (1 \le i \le N1≤i≤N), if he hires the ii-th worker, he must pay that worker c_ic 
i
​
  coins.

Help Chef find the minimum total number of coins he needs to pay to have a text written and translated. It is guaranteed that it is possible to write and translate a text.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long pay[n], job[n];
    for (int i = 0; i < n; i++)
        cin >> pay[i];
    for (int i = 0; i < n; i++)
        cin >> job[i];
    long long cheapest_translator = INT_MAX;
    long long cheapest_author = INT_MAX;
    long long cheapest_both = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if(job[i] == 1)
            cheapest_translator = min(cheapest_translator, pay[i]);
        else if(job[i] == 2)
            cheapest_author = min(cheapest_author, pay[i]);
        else 
            cheapest_both = min(cheapest_both, pay[i]);
    }
    cout << min((cheapest_author + cheapest_translator), cheapest_both) << endl;
    return 0;
}