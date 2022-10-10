/*
Chef recorded a video explaining his favorite recipe. However, the size of the video is too large to upload on the internet. He wants to compress the video so that it has the minimum size possible.

Chef's video has NN frames initially. The value of the i^{th}i 
th
  frame is A_iA 
i
​
 . Chef can do the following type of operation any number of times:

Choose an index ii (1\le i \le N)(1≤i≤N) such that the value of the i^{th}i 
th
  frame is equal to the value of either of its neighbors and remove the i^{th}i 
th
  frame.
Find the minimum number of frames Chef can achieve.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int frames = 1;
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n - 1; i++)
        {
            if(arr[i] != arr[i + 1])
                frames++;
        }
        cout << frames << endl;
    }
    return 0;
}