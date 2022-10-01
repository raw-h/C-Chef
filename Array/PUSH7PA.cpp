/*
Pushpa has entered Chefland and wants to establish Pushpa-Raj here too.

Chefland has NN towers where the height of the i^{th}i 
th
  tower is H_iH 
i
​
 . To establish Pushpa-Raj, Pushpa does the following:

Initially, Pushpa chooses any tower ii (1\le i \le N)(1≤i≤N) and lands on the roof of that tower.
Let XX denote the height of the tower Pushpa is currently on, then, Pushpa can land on the roof of any tower jj (1\le j \le N)(1≤j≤N) such that the height of the j^{th}j 
th
  tower is (X+1)(X+1).
Let ii denote the index of the tower on which Pushpa lands, then, the height of all towers except tower ii increases by 11 after each jump including the initial jump.

To establish Pushpa-Raj, Pushpa wants to land at the maximum height possible. Determine the maximum height Pushpa can reach.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int cnt,ans=0;
	    sort(a,a+n);
	    for(int i=0;i<n; )
	    {
	        int j=i;
	        int cnt=0;
	        while((i<n)&&(a[i]==a[j]))
	        {
	            i++;
	            cnt++;
	        }
	        ans = max(ans,a[j]+cnt-1);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
