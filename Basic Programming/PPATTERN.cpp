/*
Consider the following 4 \times 44×4 pattern:

 1  2  4  7
 3  5  8 11
 6  9 12 14
10 13 15 16
You are given an integer NN. Print the N \times NN×N pattern of the same kind (containing integers 11 through N^2N 
2
 ).


*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int N;
        cin >> N;

        int firstElement = 1, newElement;

        for (int i = 0; i < N; i++)
        {

            int temp = N - 1;

            for (int j = 0; j < N; j++)
            {

                if (j == 0)
                {
                    cout << firstElement << " ";
                    newElement = firstElement;
                }
                else if ((i + j) <= (N - 1))
                {
                    newElement += (i + j);
                    cout << newElement << " ";
                }
                else
                {
                    newElement += temp;
                    temp--;
                    cout << newElement << " ";
                }
            }
            cout << endl;
            firstElement += (i + 2);
        }
    }
    return 0;
}
