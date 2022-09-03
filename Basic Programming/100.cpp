/*
In the 2-D world of Flatland, the Circles were having their sports day and wanted to end it with a nice formation. So, they called upon Mr. Sphere from Spaceland for help. Mr Sphere decides to arrange the Circles in square formations. He starts with NN Circles and forms the largest possible square using these Circles. He then takes the remaining Circles and repeats the procedure. A square of side SS requires S^2S 
2
  Circles to create.

Find the number of squares he will be able to form at the end of the process.
*/
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int squares = 0;
        while (n > 0)
        {
            int root;
            root = sqrt(n);
            n = n - (root * root);
            squares++;
        }
        cout << squares << endl;
    }
    return 0;
}