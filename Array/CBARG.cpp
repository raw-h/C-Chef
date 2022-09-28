/*
Recently Chef has decided to make some changes in our beloved Codechef. As you know, each problem at Codechef has its memory and time limits. To make problems even more challenging, he decided to measure allocated memory in a different way. Now judge program will be calculating not the maximum memory usage during the execution of all test files, but all the memory ever allocated by the solution program. But as Chef is not that good in algorithms, so he asks you to write a program that will calculate total memory usage of a solution.

So, you are given N numbers M1, , ,MN representing the measurements of consumed memory (in MBs) for N test files. In other terms, it means that on i-th test file, program took Mi MBs of memory. Initially, there is no memory allocated for your program. Before running your program on each test file, if the currently allocated memory is more than memory needed for the current test file, then there will be a deallocation of the memory to fit the current program. Also, if there is less than needed memory available, then allocation of memory will happen so as to fit the current program. e.g. Let us say that our program took 10 MBs on current test file. So, assuming if there was 12 MBs memory allocated before running the program on current test file, then there will happen a deallocation of 2 MBs. Assuming if there was 8 MBs memory allocated before running the program on current test file, then there will happen a allocation of 2 MBs.

Calculate the total memory allocated for running the solution program on all the N test files. Please see third sample for more clarity.
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll test_files;
        cin >> test_files;
        ll required_mem[test_files];
        for (ll i = 0; i < test_files; i++)
            cin >> required_mem[i];
        ll allocated_mem = required_mem[0];
        for (ll i = 1; i < test_files; i++)
        {
            if(required_mem[i] > required_mem[i - 1])
                allocated_mem += (required_mem[i] - required_mem[i - 1]);
        }
        cout << allocated_mem << endl;
    }
    return 0;
}