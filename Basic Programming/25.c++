/*
Chef is struggling to pass a certain college course.

The test has a total of NN question, each question carries 33 marks for a correct answer and -1−1 for an incorrect answer. Chef is a risk-averse person so he decided to attempt all the questions. It is known that Chef got XX questions correct and the rest of them incorrect. For Chef to pass the course he must score at least PP marks.

Will Chef be able to pass the exam or not?
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int total_que, correct, passing_marks;
        cin >> total_que >> correct >> passing_marks;
        int marks = 0;
        total_que -= correct;
        marks += (correct * 3);
        total_que *= -1;
        marks += total_que;
        if (marks >= passing_marks)
            cout << "PASS" << endl;
        else
            cout << "FAIL" << endl;
    }
    return 0;
}
