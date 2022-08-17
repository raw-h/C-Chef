#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int faces, num1, num2;
        cin >> faces >> num1 >> num2;
        float prob = 1 / float(faces);
        int arr[faces];
        for (int j = 0; j < faces; j++)
        {
            cin >> arr[j];
        }
        cout << prob << " This is prob." << endl;
        int count = 0;
        for (int j = 0; j < faces; j++)
        {
            if (arr[j] == num1)
                count++;
        }
        for (int j = 0; j < faces; j++)
        {
            if (arr[j] == num2)
                count++;
        }
        for (int j = 0; j < count; j++)
        {
            prob *= prob;
        }
        cout << fixed << setprecision(10) << prob << endl;
    }
    return 0;
}
