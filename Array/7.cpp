/*
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    for (int j = 0; j < n; j++) {
	        cin >> arr[j];
	    }
	    int count = 0;
	    for (int j = 0; j < n; j++) {
	        if(arr[j] > k)
	            count++;
	    }
	    cout << count << endl;
	}
	return 0;
}

*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > k)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
