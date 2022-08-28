/*
Chef has recently introduced a feature, called WA Test Cases, which allows you to see the smallest test case that your WA code has failed in. For example, you can go to any relevant problem in Practice, make a submission which gets a WA verdict, and then click on the "Debug My Code" button to see the test case.

Your job now is to find that smallest test case that a particular submission fails on. That problem has NN test cases, and you are given the size of each of those test cases as S_1, S_2, \ldots, S_NS 
1
​
 ,S 
2
​
 ,…,S 
N
​
 . You are also given a binary string VV, which tells whether the submission has passed a particular test case or not. That is, if the i^{th}i 
th
  bit of VV is 11, that means that the submission has passed the i^{th}i 
th
  test case. If it is 00, then it has failed that test case. Your job is the output the size of the smallest test case where the submission has failed.
  */
 #include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int test_cases;
        cin >> test_cases;
        int arr[test_cases];
        for (int j = 0; j < test_cases; j++)
            cin >> arr[j];
        string succ_rate;
        cin >> succ_rate;
        for (int k = 0; k < test_cases; k++)
        {
            int smallest_index = INT_MAX;
            int smallest_t_c = INT_MAX;
            for (int l = 0; l < test_cases; l++)
            {
                if (arr[l] < smallest_t_c)
                {
                    smallest_t_c = arr[l];
                    smallest_index = l;
                }
            }
            if (succ_rate[smallest_index] == '0')
            {
                cout << smallest_t_c << endl;
                break;
            }
            else
                arr[smallest_index] += 100;
        }
    }
    return 0;
}