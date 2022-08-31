/*
No play and eating all day makes your belly fat. This happened to Chef during the lockdown. His weight before the lockdown was w_1w 
1
​
  kg (measured on the most accurate hospital machine) and after MM months of lockdown, when he measured his weight at home (on a regular scale, which can be inaccurate), he got the result that his weight was w_2w 
2
​
  kg (w_2 \gt w_1w 
2
​
 >w 
1
​
 ).

Scientific research in all growing kids shows that their weights increase by a value between x_1x 
1
​
  and x_2x 
2
​
  kg (inclusive) per month, but not necessarily the same value each month. Chef assumes that he is a growing kid. Tell him whether his home scale could be giving correct results.
  */
 #include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int b_lkd, a_lkd, grow_from, grow_to, months, increase;
        cin >> b_lkd >> a_lkd >> grow_from >> grow_to >> months;
        increase = (a_lkd - b_lkd);
        if (increase >= (grow_from * months) && increase <= (grow_to * months))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}