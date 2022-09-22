/*
Andrash study in Uzhland National University. Now is the time of exam results. Andrash similar to other students, hopes that this scores in the exam could fetch him a scholarship/stipendium for his studies.

There are following simple rules to receive stipendium:

University follows 5 point grading system. In an exam, a student can receive any score from 2 to 5. 2 is called an F grade, meaning that student has failed that exam.
Student should not have fail any of the exams.
Student must obtain a full score in some of his/her exams to show that he/she is excellent in some of the subjects.
He/She must have a grade point average not less than 4.0
You are given information regarding the exams and how Andrash performed in those. Can you help him figure out whether he will receive the stipendium or not!!
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        float marks[n];
        float sum = 0;
        bool flag = 0;
        bool flag2 = 0;
        for (int i = 0; i < n; i++){
            cin >> marks[i];
            sum += marks[i];
            if(marks[i] <= 2)
                flag = 1;
            if(marks[i] == 5)
                flag2 = 1;
        }
        if(((sum / float(n)) >= 4.0) && !flag && flag2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}