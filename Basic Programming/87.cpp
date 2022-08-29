/*
The ZCO Scholarship Contest has just finished, and you finish with a rank of RR. You know that Rank 11 to Rank 5050 will get 100 \%100% scholarship on the ZCO exam fee and Rank 5151 to Rank 100100 will get 50 \%50% percentage scholarship on the ZCO exam fee. The rest do not get any scholarship.
What percentage of scholarship will you get ?
*/
#include <iostream>
using namespace std;

int main()
{
    int rank;
    cin >> rank;
    if (rank <= 50)
        cout << 100 << endl;
    else if (rank >= 51 && rank <= 100)
        cout << 50 << endl;
    else
        cout << 0 << endl;
    return 0;
}
