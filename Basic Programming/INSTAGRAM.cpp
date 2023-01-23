/* Chef categorises an instagram account as spam, if, the following count of the account is more than
10 10 times the count of followers.
*/

#include<bits/stdc++.h>
    using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int following, follower;
        cin >> following >> follower;
        if(following > (follower * 10))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}