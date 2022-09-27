/*
Chef is a private detective. He was asked to investigate a case of murder in the city of Frangton.

Chef arrived in Frangton to find out that the mafia was involved in the case. Chef spent some time watching for people that belong to the clan and was able to build a map of relationships between them. He knows that a mafia's organizational structure consists of a single Don, heading a hierarchical criminal organization. Each member reports exactly to one other member of the clan. It's obvious that there are no cycles in the reporting system of the mafia.

There are N people in the clan, for simplicity indexed from 1 to N, and Chef knows who each of them report to. Member i reports to member Ri.

Now, Chef needs to identfy all potential killers to continue his investigation. Having considerable knowledge about the mafia's activities, Chef knows that the killer must be a minor criminal, that is, one of the members who nobody reports to. Please find the list of potential killers for Chef. Since Don reports to nobody, his Ri will be equal to 0.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n] = {0};
    int report[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
        report[arr[i]] = 1;
    for (int i = 0; i <= n; i++)
    {
        if (report[i] == 0)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}